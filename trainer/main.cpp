#include <iostream>
#include <fstream>
#include <sstream>

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

static void read_csv(const string& filename, vector<Mat>& images, vector<int>& labels, char separator = ';') {
    ifstream file(filename.c_str(), ifstream::in);
    if (!file) {
        string error_message = "No valid input file was given, please check the given filename.";
        CV_Error(CV_StsBadArg, error_message);
    }
    string line, path, classlabel;
    while (getline(file, line)) {
        stringstream liness(line);
        getline(liness, path, separator);
        getline(liness, classlabel);
        if(!path.empty() && !classlabel.empty()) {
            images.push_back(imread(path, 0));
            labels.push_back(atoi(classlabel.c_str()));
        }
    }
}

int main(int argc, const char *argv[])
{
  // Check for valid command line arguments, print usage
  // if no arguments were given.
  if (argc != 4) {
    cout << "usage: " << argv[0] << " </path/to/haar_cascade> </path/to/csv.ext>" << endl;
    cout << "\t </path/to/haar_cascade> -- Path to the Haar Cascade for face detection." << endl;
    cout << "\t </path/to/csv.ext> -- Path to the CSV file with the face database." << endl;
    cout << "\t </path/to/output.ext> -- Path to the XML file with the face model output." << endl;
    exit(1);
  }

  // Get the path to your CSV:
  string fn_haar = string(argv[1]);
  string fn_csv = string(argv[2]);
  string fn_output = string(argv[3]);

  // holds images and labels
  vector<Mat> images;
  vector<int> labels;

  // Read in the data (fails if no valid input filename is given, but you'll get an error message):
  try {
    read_csv(fn_csv, images, labels);
  } catch (cv::Exception& e) {
    cerr << "Error opening file \"" << fn_csv << "\". Reason: " << e.msg << endl;
    // nothing more we can do
    exit(1);
  }

  Ptr<FaceRecognizer> model =  createFisherFaceRecognizer(2, 500.0);
  model->train(images, labels);

  model->save(fn_output);
  return 0;
}

