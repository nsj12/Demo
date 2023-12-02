cmake_minimum_required(VERSION 3.15)

project(run)
set(CMAKE_CXX_STANDARD 14)
set(OpenCV_DIR /usr/include/opencv4//usr/include/opencv4/opencv2)
find_package(OpenCV 4.2.0)
# set(INC_DIR //home/nsj/env/network/intel/openvino/src/inference/include)
# set(LINK_DIR /home/nsj/.local/share/Trash/files/openvino/src/inference/include)
set(CMAKE_PREFIX_PATH /home/nsj/env/network/intel/openvino/build)
find_package(InferenceEngine REQUIRED)
include_directories(${InferenceEngine_INCLUDE_DIRS})
# include_directories(${INC_DIR})
# link_directories(${LINK_DIR})
# link_libraries(libopenvino.so)

include_directories(.)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable( run
                main.cpp
)
target_link_libraries(run ${OpenCV_LIBRARIES} ${InferenceEngine_LIBRARIES})