#include "headers/hostname.h"
#include <iostream>

int main() {

    int action = 0;

    std::cout << "Choose an action" << std::endl;
    std::cout << "1. hostname change ( run it as root )" << std::endl;
    std::cout << "2. N/A" << std::endl;
    std::cout << "3. N/A" << std::endl;
    std::cout << "4. Exit Daemonix" << std::endl;

    std::cout << "Choice: ";
    std::cin >> action;

    switch (action) {
        case 1:
            changeHostname();
            break;
        case 2:
            std::cout << "N/A" << std::endl;
            break;
        case 3:
            std::cout << "N/A" << std::endl;
            break;
        case 4:
            exit(0);
        default:
            std::cerr << "Invalid action" << std::endl;
            break;
    }

    return 0;
}