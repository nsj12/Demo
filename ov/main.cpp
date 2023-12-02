#include <iostream>
#include <string>
#include <inference_engine.hpp>
#include <openvino/openvino.hpp>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace ov;
using namespace cv;
int main()
{
    ov::Core core;
    ov::CompiledModel compiled_model;
    cv::Mat img;
    cout<<"Finish"<<endl;
}