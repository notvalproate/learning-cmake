#pragma once

#include <string>

namespace cats {

class Cat {
public:
    explicit Cat(const std::string& name);

    void meow() const;
    virtual void speak() const = 0;
protected:
    std::string m_Name;
};

}