#pragma once

#include "Cats.hpp"

namespace cats {

class ScottishFold : public Cat {
public:
    explicit ScottishFold(const std::string& name);

    void speak() const override;
};

}
