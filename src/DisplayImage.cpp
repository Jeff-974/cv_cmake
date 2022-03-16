#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
 
Mat src, dst;
int main(){
    Mat src1;
    src1 = imread("res/lena.png");
    resize(src1, src, Size(src1.cols, src1.rows)); 
    if (!src.data){
        printf("cannot load image ...");
        return -1;
    }
    namedWindow("src img", CV_WINDOW_AUTOSIZE);
    imshow("src img", src);
    
    waitKey(0);
    return 0;
}