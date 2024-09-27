#pragma once

#include <iostream>
#include <string>

namespace cprint {

class StringPrinter {
public:
    explicit StringPrinter(std::ostream& os);

    void print(const std::string& str) const;
private:
    std::ostream& m_OutputStream;
};

}