cmake_minimum_required(VERSION 3.10)

project(ImgProcAlg)

set(CMAKE_CXX_STANDARD 11)

add_library(ImgProcAlg STATIC
    ${CMAKE_SOURCE_DIR}/src/AlgFrz.cpp
    ${CMAKE_SOURCE_DIR}/src/LuckyImageAlg.cpp
    ${CMAKE_SOURCE_DIR}/src/MotionCompensateAlg.cpp
    ${CMAKE_SOURCE_DIR}/src/NlmDenoiseAlg.cpp
)

target_include_directories(ImgProcAlg PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)