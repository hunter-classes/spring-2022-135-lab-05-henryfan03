#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Divisibility Base Cases") {
  CHECK(isDivisibleBy(1,1) == true);
  CHECK(isDivisibleBy(3,2) == false);
}

TEST_CASE("Divisibility by Zero Case") {
  CHECK(isDivisibleBy(1,0) == false);
}

TEST_CASE("Divisibility with large integers") {
  CHECK(isDivisibleBy(100000000,10000) == true)
}
