cmake_minimum_required(VERSION 3.5)
project(structcpp)
set(CMAKE_CXX_FLAGS "-fno-stack-protector ${CMAKE_CXX_FLAGS} -std=c++11 ")

ADD_SUBDIRECTORY(binTree)
set(SOURCE_FILES main.cpp sort/init.cpp)
add_executable(structcpp ${SOURCE_FILES})
target_link_libraries(structcpp binTree)