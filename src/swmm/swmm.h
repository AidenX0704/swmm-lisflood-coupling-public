//
// Created by xiao on 2024/12/29.
//

#ifndef SWMM_H
#define SWMM_H

#ifdef _WIN32
    #ifdef SWMM_EXPORTS
        #define SWMM_API __declspec(dllexport)  // 导出符号
    #else
        #define SWMM_API __declspec(dllimport)  // 导入符号
    #endif
#else
    #define SWMM_API  // Linux 和 macOS 下无需特殊处理
#endif

class SWMM_API swmm {
public:
    static int swmm_getVersion();
};

#endif // SWMM_H
