#include "catch2/catch_test_macros.hpp"
#include <catch2/benchmark/catch_benchmark.hpp>

#include "ScottishFold.hpp"
#include "vmath/Vector.hpp"

TEST_CASE("Benchmark Fibonacci") {
    int a = 5;
    REQUIRE(a == 5);
}