#pragma once

#include "Cats.hpp"

namespace cats {

class Siamese : public Cat {
public:
    explicit Siamese(const std::string& name);

    void speak() const override;
};

}
