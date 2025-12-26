
#include <iostream>

#define TODO(message)do { fprintf(stderr, "%s:%d: \033[1;35mTODO\033[0m: %s\n", __FILE__, __LINE__, message); abort(); } while(0)

template<typename T>
void error(T msg) {
    std::cout << "\033[1;31mERROR\033[0m" << ": " << msg << '\n';
}

template<typename T>
void done(T msg) {
    std::cout << "\033[1;32mDONE\033[0m" << ": " << msg << '\n';
}

template<typename T>
void warn(T msg) {
    std::cout << "\033[1;33mWARN\033[0m" << ": " << msg << '\n';
}

template<typename T>
void debug(T msg) {
    std::cout << "\033[1;34mDEBUG\033[0m" << ": " << msg << '\n';
}