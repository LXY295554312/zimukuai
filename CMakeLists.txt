cmake_minimum_required(VERSION 3.10)
project(Blend)

set(CMAKE_CXX_STANDARD 17)
set(OpenCV_DIR  ${CMAKE_SOURCE_DIR}/external/opencv)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(Blend main.cpp)
target_link_libraries(Blend ${OpenCV_LIBS})