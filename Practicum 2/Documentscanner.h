#pragma once

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

namespace eindopdracht
{
	void documentenScanner();
	Mat preProcessing(Mat img);
	Mat preProcessingWords(Mat img);
	Mat preProcessingLetters(Mat img);
	vector<Point> reorder(vector<Point> points);
	Mat getWarp(Mat img, vector<Point> points, float w, float h);
	void drawPoints(vector<Point> points, Scalar color);
	vector<Point> getContours(Mat img);
}