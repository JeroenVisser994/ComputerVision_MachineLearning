#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

void showImage()
{
	std::string path = "../Resources/test.png";
	cv::Mat img = cv::imread(path);
	cv::imshow("Image", img);
	cv::waitKey();
}

void showVideo() // Throws error at end of video file!
{
	std::string path = "../Resources/test_video.mp4";
	cv::VideoCapture capture(path);
	cv::Mat img;

	while (true)
	{
		capture.read(img);

		cv::imshow("Image", img);
		cv::waitKey(10);
	}
}

void showWebcam()
{
	cv::VideoCapture capture(0);
	cv::Mat img;

	while (true)
	{
		capture.read(img);

		cv::imshow("Image", img);
		cv::waitKey(1);
	}
}

int main()
{
	//showImage();
	showVideo();
	//showWebcam();
}
