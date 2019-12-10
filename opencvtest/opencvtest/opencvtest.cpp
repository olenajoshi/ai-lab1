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

int main(int argc, char** argv)
{
 Mat image = imread("C:\\Users\\olenajoshi\\Desktop\\ai-lab-1\\1.png");
 if (image.empty())
 {
  cout << "Could not open or find the image" << endl;
  cin.get();
  return -1;
 }

 String windowName = "Image";
 namedWindow(windowName);
 imshow(windowName, image);
 waitKey(0);
 destroyWindow(windowName);
 return 0;
}

