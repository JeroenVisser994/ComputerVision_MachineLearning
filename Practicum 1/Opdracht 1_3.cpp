#include "Opdracht 1_3.h"

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

namespace opdracht1_3
{
	void showSelfmadeImage()
	{
		int width = 512, height = 512;

		cv::Mat img(height, width, CV_8UC3, cv::Scalar(255, 255, 255));

		cv::rectangle(img, cv::Point(25, 25), cv::Point(width - 25, height - 25), cv::Scalar(50, 50, 255), cv::FILLED);

		cv::circle(img, cv::Point(256, 256), 150, cv::Scalar(255, 50, 50), 5);

		cv::line(img, cv::Point(75, height - 60), cv::Point(width - 75, height - 60), cv::Scalar(255, 255, 255), 30);

		cv::putText(img, "Look at this text!", cv::Point(75, height - 50), cv::FONT_HERSHEY_COMPLEX_SMALL, 1, cv::Scalar(0, 0, 0));

		cv::imshow("SelfmadeImage", img);
	}
}
