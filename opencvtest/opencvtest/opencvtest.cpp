// opencvtest.cpp : Defines the entry point for the console application.
//

#ifdef _DEBUG
#pragma comment(lib, "opencv_core243d.lib")
#pragma comment(lib, "opencv_features2d243d.lib")
#pragma comment(lib, "opencv_highgui243d.lib")
#pragma comment(lib, "opencv_imgproc243d.lib")
#pragma comment(lib, "opencv_core243.lib")
#pragma comment(lib, "opencv_features2d243.lib")
#pragma comment(lib, "opencv_highgui243.lib")
#pragma comment(lib, "opencv_imgproc243.lib")
#endif

#include "stdafx.h"

#include <cv.h>
#include <highgui.h>


int _tmain(int argc, _TCHAR* argv[])
{
	IplImage* img = cvLoadImage("C:\\Users\\olenajoshi\\Desktop\\ai-lab-1\\1.png");
	cvNamedWindow("example1", CV_WINDOW_AUTOSIZE);
	cvShowImage("example1", img);
	cvWaitKey(0);
	cvReleaseImage(&img);
	cvDestroyWindow("example1");
	return 0;
}

