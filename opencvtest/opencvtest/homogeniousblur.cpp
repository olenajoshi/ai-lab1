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

    Mat blur_3_3;
    blur(image, blur_3_3, Size(3, 3));

    Mat blur_5_5;
    blur(image, blur_5_5, Size(5, 5));

    String window_name = "image"; 
    String window_3_3 = "3 x 3 kernel blured image";
    String window_5_5 = "5 x 5 kernel blured image";

    namedWindow(window_name);
    namedWindow(window_3_3);
    namedWindow(window_5_5);

    imshow(window_name, image); 
    imshow(window_3_3, blur_3_3);
    imshow(window_5_5, blur_5_5);

    waitKey(0);

    destroyAllWindows();

    return 0;
}
