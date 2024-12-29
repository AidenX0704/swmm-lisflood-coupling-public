# Coupling 模块源文件
set(SOURCES CouplingModule.cpp)

# 动态库
add_library(coupling SHARED ${SOURCES})

# 定义导出宏
target_compile_definitions(coupling PRIVATE EXPORT_COUPLING)

# 包含路径
target_include_directories(coupling PUBLIC ${CMAKE_SOURCE_DIR}/include)

# 平台特定设置
if(WIN32)
    target_compile_options(coupling PRIVATE /W4)
elseif(UNIX)
    target_compile_options(coupling PRIVATE -Wall -Wextra)
endif()
