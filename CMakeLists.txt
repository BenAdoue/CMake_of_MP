﻿# CMakeList.txt: CMakeProject_for_MP 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。

cmake_minimum_required (VERSION 3.8)

project (CMakeProject_for_MP)

set(SRC_LIST CMakeProject_for_MP.cpp)

include_directories(./inc)
# aux_source_directory(./inc var)

# 将源代码添加到此项目的可执行文件。
add_executable(CMakeProject_for_MP ${SRC_LIST})



if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject_for_MP PROPERTY CXX_STANDARD 20)
endif()

# TODO: 如有需要，请添加测试并安装目标。
