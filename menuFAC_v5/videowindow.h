#ifndef VIDEOWINDOW_H
#define VIDEOWINDOW_H
#include "LoginPassword.h"
#include <QLabel>
#include <QPixmap>
#include <QTimer>
#include <QFile>
#include <QFileInfo>
#include <QString>
#include <opencv2/opencv.hpp>
#include <stdlib.h>

using namespace cv;
using namespace std;

// clase para mostrar la webcam en un QLabel
class VideoWindow : public QLabel
{
  Q_OBJECT
      public:
          VideoWindow(QLabel* parent = 0): QLabel(parent), cap(0)
          {
            cap.set(CV_CAP_PROP_FRAME_WIDTH, 640); // ancho de la webcam
            cap.set(CV_CAP_PROP_FRAME_HEIGHT, 480); // alto de la webcam
            timer = new QTimer(this); // timer para hacer un loop en un hilo aparte del UI
            connect(timer, SIGNAL(timeout()), this, SLOT(updatePicture())); // conectar el timeout a updatePicture()
            timer->start(20); // contar 20ms y luego volver a empezar
            p = parent;
            model =  createFisherFaceRecognizer(5, 500.0); // modelo para reconocer caras
            model->load("xml/fac_model_data.xml");//modelo sacado del entrenamiento
            usuario = -1;
            usuarioValidado = -1;
            hits = 0;
          }

          void checkFace(Mat frame) // carga el modelo y predice una cara, si la encuentra dibuja un rectangulo y muestra el ID
          {
            int im_width = 200;
            int im_height = 200;
            CascadeClassifier haar_cascade;
            haar_cascade.load("xml/haarcascade_frontalface_alt2.xml");
            /*indica donde se encuentra el clasificador*/

            Mat original = frame.clone();
                        Mat gray;
                        cvtColor(original, gray, CV_BGR2GRAY);
                        vector< Rect_<int> > faces;
                        haar_cascade.detectMultiScale(gray, faces);
                        for(int i = 0; i < (int)faces.size(); i++) {
                            Rect face_i = faces[i];
                            Mat face = gray(face_i);
                            Mat face_resized;
                            cv::resize(face, face_resized, Size(im_width, im_height), 1.0, 1.0, INTER_CUBIC);
                            double thresholdResult;
                            int prediction;
                            model->predict(face_resized, prediction, thresholdResult);
                            cout << thresholdResult << endl;
                            if(prediction == usuario) { // se encontr贸 el usuario, se guarda una foto y se sube via socket al servidor
                                hits++;
                                cout << "USUARIO CORRECTO HITS " << hits << endl;
                                  if(hits > 4) {
                                  usuarioValidado = usuario;
                                  usuario = -1;
                                  ostringstream imagePath;
                                  imagePath << usuarioValidado << ".png";
                                  imwrite(imagePath.str(), frame);
                                  ostringstream cmd;
                                  cmd << "java cliente 192.168.0.112 " << imagePath.str() << " &";
                                  system(cmd.str().c_str());
                                  emit validUser();
                                    }
                              } else {
                                hits = 0;
                              }
                            rectangle(frame, face_i, CV_RGB(0, 255,0), 1);
                            string box_text = format("Usuario %d", prediction);
                            int pos_x = std::max(face_i.tl().x - 10, 0);
                            int pos_y = std::max(face_i.tl().y - 10, 0);
                            putText(frame, box_text, Point(pos_x, pos_y), FONT_HERSHEY_PLAIN, 1.0, CV_RGB(0,255,0), 2.0);
                        }
                      }


                  public slots:
                      void updatePicture() // actualiza el QLabel con un frame desde opencv
                      {
                        Mat image;

                          cap >> image;
                          //conversion from Mat to QImage
                          Mat dest;
                          int count=0;
                          if(usuario > -1 && count < 10) {
                            checkFace(image); count = 0;
                          } else {
                            count++;
                          }
                          cvtColor(image, dest,CV_BGR2RGB);
                          QImage image1 = QImage((uchar*) dest.data, dest.cols, dest.rows, dest.step, QImage::Format_RGB888);

                          //show Qimage using QLabel
                          p->setPixmap(QPixmap::fromImage(image1));
                      }

                      void validateFace(int u)
                      {


                        cout << "validateFace(" << u << ")" << endl;

                        usuario = u; // flag para empezar a validar un usuario, si es > -1 el sistema busca la cara de ese ID

                      }

                  signals:
                      void validUser();
                  private:
                      QTimer * timer;
                      VideoCapture cap;
                      QLabel *p;
                      Ptr<FaceRecognizer> model;
                      int usuario;
                      int usuarioValidado;
                      int hits;
            };

            #endif // VIDEOWINDOW_H
