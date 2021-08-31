#include <iostream>
// #include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <stdio.h>
// #include "opencv2/core/core.hpp"

int main() {

  //   printf()
  cv::Mat C;
  cv::Mat A(200, 200, CV_8UC3, cv::Scalar(0, 0, 255));
  cv::Mat D(A, cv::Rect(10, 10, 100, 100));
  cv::Mat M(2, 2, CV_8UC3, cv::Scalar(0, 0, 255));
  std::cout << "M = " << std::endl << " " << M << std::endl << std::endl;
  //    cv::Mat ima(500,500,CV_8U,50);

  //   cv::Mat B(A);

  printf("here");
}
