#include "Siamese.hpp"
#include <iostream>

namespace cats {

Siamese::Siamese(const std::string& name) : Cat(name) {}

void Siamese::speak() const {
    std::cout << m_Name << " is a Siamese" << std::endl;
}

}