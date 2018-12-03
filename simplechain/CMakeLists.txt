cmake_minimum_required(VERSION 3.9)


set(CMAKE_CXX_STANDARD 14)

add_executable(simplechain SimpleBlockChain.cpp)
target_link_libraries(simplechain LINK_PUBLIC blocklib)