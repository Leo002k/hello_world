#include "lib.h"

#include <iostream>

int main([[maybe_unused]] int argc, char *argv[]) {
    std::cout << "Build " << version() << std::endl;
    std::cout << "Hello, world!" << std::endl;

    return 0;
}