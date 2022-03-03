#include <iostream>
#include "funcs.h"

// add functions here

bool isDivisibleBy(int n, int d) {
  if (d == 0) {
    return false;
  }
  if (n % d == 0) {
    return true;
  }
  else {
    return false;
  }
}

bool isPrime(int n) {
  if (n == 0) {
    return false;
  }
  else if (n == 1 || n == 2) {
    return true;
  }
  else {
    for (int i = 3;i < n;i++) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  }
}

int nextPrime(int n) {
  int target = n + 1;
  while (isPrime(target) == false) {
    target++;
  }
  return target;
}
