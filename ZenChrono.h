#ifndef _ZENCHRONO_
#define _ZENCHRONO_	

#include <chrono>

using std::chrono::system_clock;
using std::chrono::steady_clock;
using std::chrono::high_resolution_clock;
using std::chrono::duration;
using seconds = duration<double>;
using milliseconds = duration<double, std::milli>;
using microseconds = duration<double, std::micro>;
using nanoseconds = duration<double, std::nano>;
using fps24 = duration<unsigned long, std::ratio<1, 24>>;

// Scoped timer BASE CLASS
class ScopedTimer {
    steady_clock::time_point start_ = steady_clock::now();
public:
    ~ScopedTimer() {
        auto duration = steady_clock::now() - start_;
        auto s = seconds(duration).count();
    }
};

#endif // !_ZENCHRONO_

