/*
 * Main.cpp
 *
 *  Created on: 17/04/2018
 *      Author: gustavo
 */

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <string>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
using namespace std;

int zoomIn() {
	Mat img, result;
	img = imread("./lena.jpg", CV_LOAD_IMAGE_COLOR);
	if (!img.data) {
		cout << "Image not found";
		return -1;
	}
	result.create(img.rows*2, img.cols*2,CV_8UC3);
	int k = 0;
	int l = 0;
	for (int i = 0; i < img.rows; i++) {
		for (int j = 0; j < img.cols - 1; j++) {
			Vec3b pixel1 = img.at<Vec3b>(i, j);
			Vec3b pixel2 = img.at<Vec3b>(i, j + 1);
			int r1 = pixel1[2];
			int g1 = pixel1[1];
			int b1 = pixel1[0];

			int r2 = pixel2[2];
			int g2 = pixel2[1];
			int b2 = pixel2[0];

			result.at<Vec3b>(k,l);
		}
	}

	return 1;
}

int main() {
	zoomIn();
	return 1;
}
