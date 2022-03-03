#include <iostream>
#include "funcs.h"

int main()
{
  int a = countPrimes(1,100);
  int b = countPrimes(0,2);
  int c = countPrimes(0,1);
  std::cout << a << " " << b << " " << c << "\n";
  for (int i = 0;i<100;i++) {
    std::cout << i << " " << isPrime(i) << std::endl;
  }
  return 0;
}
