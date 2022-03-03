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
  CHECK(isDivisibleBy(100000000,10000) == true);
}

TEST_CASE("Is Prime Base Cases") {
  CHECK(isPrime(0) == false);
  CHECK(isPrime(1) == true);
  CHECK(isPrime(2) == true);
}

TEST_CASE("Is Prime Small Integer Cases") {
  CHECK(isPrime(7) == true);
  CHECK(isPrime(10) == false);
  CHECK(isPrime(15) == false);
}

TEST_CASE("Is Prime Large Mersenne Prime Cases") {
  CHECK(isPrime(8191) == true);
  CHECK(isPrime(131071) == true);
}

TEST_CASE("Next Prime Base Cases") {
  CHECK(nextPrime(0) == 1);
  CHECK(nextPrime(1) == 2);
  CHECK(nextPrime(2) == 3);
}

TEST_CASE("Next Prime Lab Examples Cases") {
  CHECK(nextPrime(14) == 17);
  CHECK(nextPrime(17) == 19);
}
