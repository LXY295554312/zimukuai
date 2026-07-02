#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    // Load an image from file
    cv::Mat image = cv::imread("image.jpg");

    // Check if the image was loaded successfully
    if (image.empty()) {
        std::cerr << "Could not open or find the image!" << std::endl;
        return -1;
    }

    // Display the image in a window
    cv::imshow("Display window", image);

    // Wait for a key press indefinitely
    cv::waitKey(0);

    return 0;
}