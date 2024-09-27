#pragma once

#include <string>

class Cat {
public:
    explicit Cat(const std::string& name);

    void meow() const;
private:
    std::string m_Name;
};