#include "catch2/catch_test_macros.hpp"

#include "ScottishFold.hpp"

#include <sstream>
#include <iostream>
#include <streambuf>

TEST_CASE("Cat Meows Correctly") {
    std::ostringstream outputBuffer;
    std::streambuf* originalCoutBuffer = std::cout.rdbuf(outputBuffer.rdbuf());

    cats::ScottishFold cat("Muffin");
    cat.meow();

    std::cout.rdbuf(originalCoutBuffer);

    REQUIRE(outputBuffer.str() == "Muffin says: Meow!\n");
}