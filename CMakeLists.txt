cmake_minimum_required(VERSION 3.24)
project(profile)

set(CMAKE_CXX_STANDARD 11)

add_executable(profile main.cpp profile.cpp profile.hpp)
