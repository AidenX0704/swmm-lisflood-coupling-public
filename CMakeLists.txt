cmake_minimum_required(VERSION 3.18)
project(swmm-lisflood-coupling LANGUAGES CXX)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 构建类型
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# 动态库输出路径
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# 包含路径
include_directories(${CMAKE_SOURCE_DIR}/include)

# 添加子目录
add_subdirectory(src)
add_subdirectory(tests)
