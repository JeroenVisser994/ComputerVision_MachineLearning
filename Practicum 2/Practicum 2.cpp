#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include "Opdracht 2_2.h"
#include "Opdracht 2_3.h"
#include "Opdracht 2_4.h"
#include "Documentscanner.h"

using namespace cv;
using namespace std;

int main()
{
	/**** Opdracht 2.2 ****/
	//opdracht2_2::cannyImage();

	/**** Opdracht 2.3 ****/
	//opdracht2_3::erodeImage();

	/**** Opdracht 2.4 ****/
	//opdracht2_4::trackBar();

	/**** EindOpdracht ****/
	eindopdracht::documentenScanner();

	return 0;
}