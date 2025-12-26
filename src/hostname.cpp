#include "headers/hostname.h"
#include <iostream>
#include <fstream>
#include <string>

void changeHostname() {
    std::ofstream file("/etc/hostname", std::ofstream::out | std::ofstream::trunc);

    if (!file) {
        std::cerr << "Unable to open /etc/hostname" << std::endl;
        exit(1);
    }

    std::cout << "Enter hostname: (CTRL + D on Linux in order to stop writing)" << std::endl;

    std::string line;
    while (std::getline(std::cin, line)) {
        file << line << std::endl;
    }

    file.close();
    exit(0);
}
