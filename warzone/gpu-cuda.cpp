
#include "opencv2/opencv.hpp"
#include <opencv2/cudastereo.hpp>
#include <stdio.h>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <opencv2/cudaimgproc.hpp>
// #include "opencv2/cuda.hpp"

using namespace std;
using namespace cv;
using namespace cv::cuda;

int main() {
  const cv::Size size = Size(10, 10);
  const int depth = 10;

  // cv::Mat src(size, CV_8U, Scalar::all(1));

  Mat src(640, 480, CV_8U, Scalar::all(0));
  cv::Mat Q(4, 4, CV_32FC1);
  cv::randu(Q, 0.1, 10.0);
  const cv::cuda::GpuMat d_src(src);
  cv::cuda::GpuMat d_dst;

  cv::cuda::reprojectImageTo3D(d_src, d_dst, Q);
  Mat y;
  d_dst.download(y);

  cout << Q;
}
