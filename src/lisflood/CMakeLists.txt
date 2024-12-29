# Lisflood 模块源文件
set(SOURCES LisfloodModule.cpp)

# 动态库
add_library(lisflood SHARED ${SOURCES})

# 定义导出宏
target_compile_definitions(lisflood PRIVATE EXPORT_LISFLOOD)

# 包含路径
target_include_directories(lisflood PUBLIC ${CMAKE_SOURCE_DIR}/include)

# 平台特定设置
if(WIN32)
    target_compile_options(lisflood PRIVATE /W4)
elseif(UNIX)
    target_compile_options(lisflood PRIVATE -Wall -Wextra)
endif()
