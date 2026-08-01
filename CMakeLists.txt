# 1. 指定 CMake 的最低版本要求
cmake_minimum_required(VERSION 3.10)

# 2. 定义项目名称及使用的语言 (CXX 代表 C++)
project(bethebestc LANGUAGES CXX)

# 3. 设置 C++ 标准 (例如 C++11)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 4. 自动收集源文件
# 收集根目录下的 .cpp 文件
file(GLOB ROOT_SOURCES "*.cpp")
# 收集 source 目录下的 .cpp 文件
file(GLOB SOURCE_DIR_SOURCES "source/*.cpp")

# 5. 创建可执行文件 (将收集到的源文件合并编译)
add_executable(entrance ${ROOT_SOURCES} ${SOURCE_DIR_SOURCES})

# 6. 设置头文件包含目录
# 告诉编译器去 include 目录下寻找头文件
target_include_directories(entrance PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)