#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include "stdio.h"

int main(int argc, char *argv[])
{
    cv::Mat pic = cv::imread("./pic.jpg");

    cv::imshow("my pic", pic);

    cv::waitKey(0);
}
