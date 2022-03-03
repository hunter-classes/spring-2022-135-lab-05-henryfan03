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
  CHECK(isPrime(1) == false);
  CHECK(isPrime(2) == true);
}

TEST_CASE("Is Prime Small Integer Cases") {
  CHECK(isPrime(3) == true);
  CHECK(isPrime(7) == true);
  CHECK(isPrime(10) == false);
  CHECK(isPrime(15) == false);
}

TEST_CASE("Is Prime Large Mersenne Prime Cases") {
  CHECK(isPrime(8191) == true);
  CHECK(isPrime(131071) == true);
}

TEST_CASE("Next Prime Base Cases") {
  CHECK(nextPrime(0) == 2);
  CHECK(nextPrime(1) == 2);
  CHECK(nextPrime(2) == 3);
}

TEST_CASE("Next Prime Lab Examples Cases") {
  CHECK(nextPrime(14) == 17);
  CHECK(nextPrime(17) == 19);
}

TEST_CASE("countPrimes Base Cases") {
  CHECK(countPrimes(0,1) == 0);
  CHECK(countPrimes(1,2) == 1);
}

TEST_CASE("countPrimes large range") {
  CHECK(countPrimes(1,100) == 25);
}

TEST_CASE("Twinprime Test Case") {
  CHECK(isTwinPrime(2) == false);
  CHECK(isTwinPrime(3) == true);
}

TEST_CASE("Twinprime Larger Integers") {
  CHECK(isTwinPrime(29) == true);
  CHECK(isTwinPrime(31) == true);
  CHECK(isTwinPrime(100) == false);
}

TEST_CASE("Next Twin Prime Base Cases") {
  CHECK(nextTwinPrime(1) == 3);
  CHECK(nextTwinPrime(5) == 7);
}

TEST_CASE("Next Twin Prime Larger Number Cases") {
  CHECK(nextTwinPrime(29) == 31);
}

//TEST_CASE("") {
  //CHECK( == );
//}

//TEST_CASE("") {
  //CHECK( == );
//}
