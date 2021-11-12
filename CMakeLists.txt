cmake_minimum_required(VERSION 3.19)
project(ArangurenParcial)

set(CMAKE_CXX_STANDARD 14)

add_executable(ArangurenParcial main.cpp Service.cpp Service.h Management.cpp Management.h OilStation.cpp OilStation.h)
