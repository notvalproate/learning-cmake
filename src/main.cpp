#include <iostream>
#include "cprint.hpp"
#include "Cat.hpp"

#include "zlib.h"

#include "ScottishFold.hpp"

#ifdef _SAY_HELLO
    #define _HELLO "Hello, World!"
#else
    #define _HELLO "Goodbye, World!"
#endif

#ifdef _PLATFORM_WIN_32
    #define _CURRENT_PLATFORM "Windows 32-bit"
#else
    #define _CURRENT_PLATFORM "Unknown platform"
#endif

int main() {
    cprint::StringPrinter cprintPrinter(std::cout);
    cprintPrinter.print(_HELLO);
    cprintPrinter.print(_CURRENT_PLATFORM);

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

    delete[] compressed;

    cats::ScottishFold myScottishFold("Bella");
    myScottishFold.meow();
    myScottishFold.speak();

    return 0;
}