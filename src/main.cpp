#include <iostream>
#include "StringPrinter.hpp"
#include "cprint.hpp"

int main() {
    StringPrinter stdPrinter(std::cout);
    stdPrinter.print("Hello, World!");

    cprint::StringPrinter cprintPrinter(std::cout);
    cprintPrinter.print("Hello, World!");
    return 0;
}