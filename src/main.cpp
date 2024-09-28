#include <iostream>
#include "cprint.hpp"
#include "Cat.hpp"

#include "zlib.h"

#include "ScottishFold.hpp"

int main() {
    cprint::StringPrinter cprintPrinter(std::cout);
    cprintPrinter.print("Hello, World!");

    Cat myCat("Luna");
    myCat.meow();

    const char* data = "Hello, World!";
    uLong srcLen = strlen(data);
    uLong destLen = compressBound(srcLen);

    Bytef* compressed = new Bytef[destLen];

    if (compress(compressed, &destLen, (const Bytef*)data, srcLen) == Z_OK) {
        std::cout << "Data compressed successfully.\n";
    } else {
        std::cerr << "Compression failed.\n";
    }

    delete compressed;

    cats::ScottishFold myScottishFold("Bella");
    myScottishFold.meow();
    myScottishFold.speak();

    return 0;
}