#include "asda.h"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("test validNumber")
{
    FibonacciSolver a;
    a.getNthFibonacciNumber(5);
    //REQUIRE_THROWS(a.getNthFibonacciNumber(5));
}


