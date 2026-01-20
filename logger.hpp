#ifndef _LOGGER_
#define _LOGGER_
// 考虑在log类中内置时间计时功能，每当LOG输出时可以包含时间输出
// 功能: 计时重置，log阶级，阶级切换，颜色感知
// [2026-1-16][logger:23]:
#include "ZenChrono.h"
#include "Zenformat.h"
#include <iostream>
#include <source_location>

using namespace std;

class Logger {
public:
    Logger();
    ~Logger();
    void now() {
        auto t = system_clock::now();
        std::time_t now_t = system_clock::to_time_t(t);
        cout << std::put_time(std::localtime(&now_t), "%Y-%m-%d %H:%M:%S") << endl;
    };

private:
};

Logger::Logger() {
}

Logger::~Logger() {
}

#endif // _LOGGER_