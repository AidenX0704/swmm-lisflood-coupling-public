# 添加子模块
add_subdirectory(swmm)
add_subdirectory(lisflood)
add_subdirectory(coupling)

# 主程序
set(SOURCES main.cpp
        ../include/consts.h
)

# 可执行文件
add_executable(swmm-lisflood-coupling ${SOURCES})

# 链接动态库
target_link_libraries(swmm-lisflood-coupling PRIVATE swmm lisflood coupling)

# 包含路径
target_include_directories(swmm-lisflood-coupling PRIVATE ${CMAKE_SOURCE_DIR}/include)
