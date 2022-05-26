#include "Opdracht 1_4.h"

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

namespace opdracht1_4
{
	void showWarpedImage()
	{
		std::string path = "../Resources/remote.jpg";
		cv::Mat img = cv::imread(path);

		float width = 100, height = 400;
		cv::Mat matrix, imgWarp;

		cv::Point2f src[4] = { {98, 72}, {188, 60}, {240, 414}, {417, 357} };
		cv::Point2f dest[4] = { {0.0f, 0.0f}, {width, 0.0f}, {0.0f, height}, {width, height} };

		matrix = cv::getPerspectiveTransform(src, dest);
		cv::warpPerspective(img, imgWarp, matrix, cv::Point(width, height));

		cv::imshow("Original", img);
		cv::imshow("Warped", imgWarp);
	}
}
