#include "image_processor.h"
#include <opencv2/opencv.hpp>
#include <iostream>

extern "C" {
    void process_image(const char* input_image, const char* output_image) {
        cv::Mat img = cv::imread(input_image);
        if (img.empty()) {
            std::cerr << "Could not open or find the image!" << std::endl;
            return;
        }
        cv::Mat processed_img;
        cv::cvtColor(img, processed_img, cv::COLOR_BGR2GRAY); // Example: convert to grayscale
        cv::imwrite(output_image, processed_img);    }
}