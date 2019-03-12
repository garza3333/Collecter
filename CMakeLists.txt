cmake_minimum_required(VERSION 3.13)
project(Collecter)

set(CMAKE_CXX_STANDARD 14)

add_executable(Collecter main.cpp source/List.cpp headers/List.h source/Node.cpp headers/Node.h source/Collector.cpp headers/Collector.h source/NodeCollector.cpp headers/NodeCollector.h)