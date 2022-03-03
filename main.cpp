#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "Main File Function Demo\n";
  std::cout << "-----------------------------\n";
  std::cout << "Task A. - Is Divisible By:\n";
  std::cout << "isDivisibleBy(100, 25): " << isDivisibleBy(100, 25) << std::endl;
  std::cout << "isDivisibleBy(35, 17): " << isDivisibleBy(35, 17) << std::endl;
  std::cout << std::endl;
  std::cout << "Task B. - Is Prime:\n";
  std::cout << "isPrime(2): " << isPrime(2) << std::endl;
  std::cout << "isPrime(0): " << isPrime(0) << std::endl;
  std::cout << std::endl;
  std::cout << "Task C. - Next Prime:\n";
  std::cout << "nextPrime(14): " << nextPrime(14) << std::endl;
  std::cout << "nextPrime(17): " << nextPrime(17) << std::endl;
  std::cout << std::endl;
  std::cout << "Task D. - Count Primes In Range:\n";
  std::cout << "countPrimes(1,100): " << countPrimes(1,100) << std::endl;
  std::cout << std::endl;
  std::cout << "Task E. - Is a twin prime\n";
  std::cout << "isTwinPrime(5): " << isTwinPrime(5) << std::endl;
  std::cout << "isTwinPrime(19): " << isTwinPrime(19) << std::endl;
  std::cout << std::endl;
  std::cout << "Task F. - Next TWin Prime\n";
  std::cout << "nextTwinPrime(5): " << nextTwinPrime(5) << std::endl;
  std::cout << "nextTwinPrime(19): " << nextTwinPrime(19) << std::endl;
  std::cout << std::endl;
  std::cout << "Task G. - Largest twin prime in range\n";
  std::cout << "largestTwinPrime(5, 18): " << largestTwinPrime(5, 18) << std::endl;
  std::cout << "largestTwinPrime(1, 31): " << largestTwinPrime(1, 31) << std::endl;
  std::cout << "largestTwinPrime(14, 16): " << largestTwinPrime(14, 16) << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
}
