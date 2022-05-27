#include "Opdracht 2_4.h"

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

namespace opdracht2_4
{
	Mat imgHSV, mask;
	int hmin = 0, smin = 110, vmin = 153;
	int hmax = 19, smax = 240, vmax = 255;

	void trackBar()
	{
		string path = "../Resources/kerstballen.bmp";
		Mat img = imread(path);
		cvtColor(img, imgHSV, COLOR_BGR2HSV);

		namedWindow("TrackBar", (640, 200));
		createTrackbar("Hue Min", "TrackBar", &hmin, 179);
		createTrackbar("Hue Max", "TrackBar", &hmax, 255);
		createTrackbar("Sat Min", "TrackBar", &smin, 179);
		createTrackbar("Sat Max", "TrackBar", &smax, 255);
		createTrackbar("Val Min", "TrackBar", &vmin, 179);
		createTrackbar("Val Max", "TrackBar", &vmax, 255);

		while (true) {
			Scalar lower(hmin, smin, vmin);
			Scalar upper(hmax, smax, vmax);
			inRange(imgHSV, lower, upper, mask);

			imshow("Image", img);
			imshow("HSV", imgHSV);
			imshow("Mask", mask);
			waitKey(1);
		}
	}
}
