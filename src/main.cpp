//
// Created by xiao on 2024/12/29.
//

#include <iostream>
#include <string>

#include "swmm/swmm.h"

// 声明辅助函数
void displayHelp();
void displayVersion(int major, int minor, int release);

int main(int argc, char* argv[]) {
    const int version = swmm::swmm_getVersion();
    const int vMajor = version / 10000;
    const int vMinor = (version - 10000 * vMajor) / 1000;
    const int vRelease = version - 10000 * vMajor - 1000 * vMinor;

    // 检查命令行参数数量
    if (argc == 1) {
        std::cout << "\nNot Enough Arguments (See Help --help)\n\n";
    } else if (argc == 2) {
        if (const std::string arg1 = argv[1]; arg1 == "--help" || arg1 == "-h") {
            displayHelp();
        } else if (arg1 == "--version" || arg1 == "-v") {
            displayVersion(vMajor, vMinor, vRelease);
        } else if (arg1 == "--run") {
            std::cout << "\nPlease provide the input, report, and binary file names.\n";
        } else if (arg1 == "--nodeseries") {
            std::cout << "\nPlease provide the input file and csv file names.\n";
        } else {
            std::cout << "\nUnknown Argument (See Help --help)\n\n";
        }
    } else {
        if (argv[1] == std::string("--run")) {
            const std::string blank;
            if (argc < 4) {
                std::cout << "\nNot Enough Arguments for --run (input, report, and optional binary file required)\n\n";
                return 1;
            }

            const std::string inputFile = argv[2];
            const std::string reportFile = argv[3];
            const std::string binaryFile = (argc > 4) ? argv[4] : blank;

            std::cout << "\n... EPA SWMM " << vMajor << "." << vMinor << " (Build " << vMajor << "." << vMinor << "." << vRelease << ")\n";

            std::cout << "\n SWMM simulation receive file:\n" << inputFile << " " << reportFile << " " << binaryFile << "\n";

        } else if (argv[1] == std::string("--nodeseries")) {
            if (argc < 4) {
                std::cout << "\nNot Enough Arguments for --nodeseries (input file and csv file required)\n\n";
                return 1;
            }
            std::cout << "\nNode series data processed successfully.\n";
        } else {
            std::cout << "\nUnknown Argument (See Help --help)\n\n";
        }
    }

    return 0;
}

void displayHelp() {
    std::cout << "\n\nSTORMWATER MANAGEMENT MODEL (SWMM) And Lisflood Coupling HELP\n\n";
    std::cout << "COMMANDS:\n";
    std::cout << "\t--help (-h)       SWMM-Lisflood-Coupling Help\n";
    std::cout << "\t--version (-v)    Build Version\n";
    std::cout << "\t--runswmm             Run SWMM simulation\n";
    std::cout << "\t--runlisflood         Run Lisflood simulation\n";
    std::cout << "\t--nodeseries      Process node series from .inp and .csv\n";
    std::cout << "\nRUNNING A SIMULATION:\n";
    std::cout << "\t runswmm <input file> <report file> <optional output file>\n";
    std::cout << "\t runlisflood <binary file> <output folder>\n\n";
}

void displayVersion(int major, int minor, int release) {
    std::cout << "\nSWMM Version: " << major << "." << minor << "." << release << "\n\n";
}