#include <fstream>
#include <string>
#include "headers/readfile.h"

std::string read_file(const std::string &path) {
    std::ifstream file(path);
    if (!file) return "";

    return std::string((std::istreambuf_iterator<char>(file)),
                       std::istreambuf_iterator<char>());
}