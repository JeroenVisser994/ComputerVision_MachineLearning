#include "Opdracht 2_3.h"

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

namespace opdracht2_3
{
	void erodeImage() 
	{
		string path = "../Resources/ballstripes.jl%21.bmp";
		Mat img = imread(path);
		Mat result;
		Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
		dilate(img, result, kernel);
		imshow("Image", result);
		waitKey(0);
	}
}

