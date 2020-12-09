#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;


int main() {
    cv::Mat src = imread("../2.jpg");
    cv::Mat dst_0,dst;
    cv::resize(src, src, Size(static_cast<int>(src.cols * scale), static_cast<int>(src.rows * scale)));
    cv::equalizeHist(src, dst);
    cv::imshow("src", src);
    cv::imshow("dst", dst);
    while (true) {
        if (waitKey(1) == 27)
        {
            break;
        }
    }
    return 0;
}
