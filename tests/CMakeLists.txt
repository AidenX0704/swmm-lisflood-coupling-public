# 测试程序源文件
set(TEST_SOURCES test_main.cpp)

# 测试程序
add_executable(run_tests ${TEST_SOURCES})

# 链接动态库
target_link_libraries(run_tests PRIVATE swmm lisflood coupling)
