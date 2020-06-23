cmake_minimum_required(VERSION 3.16)
project(paczkomat)

set(CMAKE_CXX_STANDARD 14)

add_executable(paczkomat main.cpp Box.cpp Box.h ParcelLocker.cpp ParcelLocker.h)