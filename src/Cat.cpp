#include "Cat.hpp"

#include <iostream>

Cat::Cat(const std::string& name) : m_Name(name) {}

void Cat::meow() const {
    std::cout << m_Name << " says: Meow!" << std::endl;
}