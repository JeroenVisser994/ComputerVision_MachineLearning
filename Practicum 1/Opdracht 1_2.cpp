#include "Opdracht 1_2.h"

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

namespace opdracht1_2
{
	void showImageOriginal()
	{
		std::string path = "../Resources/lambo.png";
		cv::Mat img = cv::imread(path);
		cv::imshow("Original", img);
	}
	
	void showImageResised()
	{
		std::string path = "../Resources/lambo.png";
		cv::Mat img = cv::imread(path);
		cv::Mat imgResised;

		cv::resize(img, imgResised, cv::Size(), 0.5, 0.5);

		cv::imshow("Resised", imgResised);
	}
	
	void showImageCropped()
	{
		std::string path = "../Resources/lambo.png";
		cv::Mat img = cv::imread(path);
		cv::Mat imgCropped = img(cv::Rect(100, 100, 300, 300));

		cv::imshow("Cropped", imgCropped);
	}
}
