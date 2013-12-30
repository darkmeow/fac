#include <iostream>
#include "opencv/cv.h"
#include "opencv/highgui.h"
#include "opencv2/opencv.hpp"


/*
**************
*     FAC    *
*            *
**************
*/

  using namespace cv;
  using namespace std;

  int main()
  {

    float EYE_SX = 0.16f;
    float EYE_SY = 0.26f;
    float EYE_SW = 0.30f;
    float EYE_SH = 0.28f;

  VideoCapture cap;
     //   Mat imagen = imread("img/images.jpg");

        CascadeClassifier detector, eyes_detector;

  if(!detector.load("clasificadores/haarcascade_frontalface_alt2.xml"))
  cout << "No se puede abrir clasificador." << endl;



  if(!eyes_detector.load("clasificadores/haarcascade_eye_tree_eyeglasses.xml"))
cout << "No se puede abrir clasificador para los ojos." << endl;

  if(!cap.open(0))
  cout << "No se puede acceder a la webcam." << endl;

  while(true)
  {
    Mat dest, gray, imagen;
 // Mat dest, gray;


 cap >> imagen;

  cvtColor(imagen, gray, CV_BGR2GRAY);
  equalizeHist(gray, dest);

  vector<Rect> rect;
  detector.detectMultiScale(dest, rect, 1.2, 3, 0, Size(60,60));

  for(Rect rc : rect)
  {
  rectangle(imagen,
  Point(rc.x, rc.y),
  Point(rc.x + rc.width, rc.y + rc.height),
  CV_RGB(0,255,0), 2);
  }

  if(rect.size() > 0)
    {
      Mat face = dest(rect[0]).clone();
      vector<Rect> leftEye, rightEye;

      int leftX = cvRound(face.cols * EYE_SX);
      int topY = cvRound(face.rows * EYE_SY);
      int widthX = cvRound(face.cols * EYE_SW);
      int heightY = cvRound(face.rows * EYE_SH);
      int rightX = cvRound(face.cols * (1.0-EYE_SX-EYE_SW));

      Mat topLeftOfFace = face(Rect(leftX, topY, widthX, heightY));
      Mat topRightOfFace = face(Rect(rightX, topY, widthX, heightY));

      eyes_detector.detectMultiScale(topLeftOfFace, leftEye);
      eyes_detector.detectMultiScale(topRightOfFace, rightEye);

      if((int)leftEye.size() > 0)
        {
          rectangle(imagen,
                    Point(leftEye[0].x + leftX + rect[0].x, leftEye[0].y + topY + rect[0].y),
              Point(leftEye[0].width + widthX + rect[0].x - 5, leftEye[0].height + heightY + rect[0].y),
              CV_RGB(0,255,255), 2);
        }

      if((int)rightEye.size() > 0)
        {
          rectangle(imagen,
                    Point(rightEye[0].x + rightX + leftX + rect[0].x, rightEye[0].y + topY + rect[0].y),
              Point(rightEye[0].width + widthX + rect[0].x + 5, rightEye[0].height + heightY + rect[0].y),
              CV_RGB(0,255,255), 2);
        }
  }


  imshow("Facial Access Control - Be Safe", imagen);
  if(waitKey(1) >= 0) break;
  }

  return 1;
  }

