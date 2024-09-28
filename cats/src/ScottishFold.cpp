#include "ScottishFold.hpp"
#include <iostream>

namespace cats {

ScottishFold::ScottishFold(const std::string& name) : Cat(name) {}

void ScottishFold::speak() const {
    std::cout << m_Name << " is a ScottishFold" << std::endl;
}

}