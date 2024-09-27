#include <iostream>
#include "cprint.hpp"
#include "Cat.hpp"

int main() {
    cprint::StringPrinter cprintPrinter(std::cout);
    cprintPrinter.print("Hello, World!");

    Cat myCat("Luna");
    myCat.meow();

    return 0;
}