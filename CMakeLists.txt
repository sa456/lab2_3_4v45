cmake_minimum_required(VERSION 3.8)
project(lab2_3_4)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp COne.cpp COne.h CTwo.cpp CTwo.h)
add_executable(lab2_3_4 ${SOURCE_FILES} COne.cpp COne.h CTwo.cpp CTwo.h)