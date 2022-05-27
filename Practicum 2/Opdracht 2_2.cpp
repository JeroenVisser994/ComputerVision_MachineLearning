#include "Opdracht 2_2.h"

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

namespace opdracht2_2
{
	int threshold1 = 25;
	int threshold2 = 25;

	void cannyImage()
	{
		string path = "../Resources/lambo.png";
		Mat img = imread(path);
		Mat blurred;
		Mat result;

		namedWindow("trackBar", (640, 200));
		createTrackbar("1", "trackBar", &threshold1, 250);
		createTrackbar("2", "trackBar", &threshold2, 250);

		GaussianBlur(img, blurred, Size(15, 15), 3, 0);

		while (true) 
		{
			Canny(blurred, result, threshold1, threshold2);
			imshow("Image", result);
			waitKey(1);
		}
	}
}