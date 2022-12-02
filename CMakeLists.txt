cmake_minimum_required(VERSION 3.25)

set(PROJECT_NAME testF)
project("${PROJECT_NAME}")


set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDART_REQUIRD TRUE)

add_executable("${PROJECT_NAME}" 6.cpp
				Func.hpp
				Func.cpp)