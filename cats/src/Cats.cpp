#include "Cats.hpp"
#include <iostream>

namespace cats {

Cat::Cat(const std::string& name) : m_Name(name) {}

void Cat::meow() const {
    // TESTING WARNING
    [[maybe_unused]] int unused = 0;
    int other_unused = 0;
    std::cout << m_Name << " says: Meow!" << std::endl;
}

}