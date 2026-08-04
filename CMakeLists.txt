cmake_minimum_required(VERSION 3.10)
project(bethebestc)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)

# 1. 添加头文件目录 (include 文件夹)
include_directories(include)

# 2. 收集所有的源文件 (自动收集 source 目录下的 .cpp 和根目录的 entrance.cpp)
file(GLOB SOURCES 
    "entrance.cpp"
    "source/*.cpp"
)

# 3. 生成可执行文件
add_executable(entrance ${SOURCES})