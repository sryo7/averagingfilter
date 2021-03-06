// averagingfilter.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include<opencv2/opencv.hpp>

using namespace cv;

int main(void)
{
	Mat im = imread("C:/Users/僚/Pictures/opencvarimura.png");
	namedWindow("originalimage", CV_WINDOW_AUTOSIZE);
	imshow("Show original image", im);

	blur(im, im, Size(3, 3));
	namedWindow("image", CV_WINDOW_AUTOSIZE);
	imshow("Show image", im);
	waitKey(0);

	return 0;
}

