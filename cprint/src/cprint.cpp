#include "cprint.hpp"
#include <iostream>

namespace cprint {

StringPrinter::StringPrinter(std::ostream& os) : m_OutputStream(os) {}

void StringPrinter::print(const std::string& str) const {
    m_OutputStream << str << std::endl;
}

}