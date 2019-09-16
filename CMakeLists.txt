cmake_minimum_required(VERSION 3.14)
project(render_test)

set(CMAKE_CXX_STANDARD 17)

add_executable(render_test src/main.cpp lib/tgaimage.cpp lib/tgaimage.h src/model.cpp src/model.h lib/geometry.h src/string_utils.h)