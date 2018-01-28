//
// Created by Julian Eiler on 1/27/18.
//

// general libraries
#include <iostream>

// OpenCV
#include <opencv2/core/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv/cv.hpp>


int main(int argc, const char **argv) {

    // open the camera
    // you can see connected cameras on linux with: $ ls /dev/video*
    cv::VideoCapture cap(0);
    if (!cap.isOpened()) {
        std::cout << "CAMERA COULD NOT BE OPENED!" << std::endl;
        return -1;
    }

    // Matrix container for image
    cv::Mat frame;

    // int for kayboard
    int keyboard = 0;

    // read images as long as q is not pressed
    while (keyboard != 'q' && keyboard != 27) {
        cap >> frame; // get a new frame_ from camera

        cv::imshow("Display Frame", frame);
        keyboard = (char) cv::waitKey(20);
    }

    //delete capture object
    cap.release();
    return 0;
}