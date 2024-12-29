# SWMM 模块源文件
set(SOURCES
        swmm.cpp
        swmm.h)

# 动态库
add_library(swmm SHARED ${SOURCES})

# 定义导出宏
target_compile_definitions(swmm PRIVATE EXPORT_SWMM)

# 包含路径
target_include_directories(swmm PUBLIC ${CMAKE_SOURCE_DIR}/include)

# 平台特定设置
if(WIN32)
    target_compile_options(swmm PRIVATE /W4)
elseif(UNIX)
    target_compile_options(swmm PRIVATE -Wall -Wextra)
endif()
