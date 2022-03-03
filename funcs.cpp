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
  if (n == 0 || n == 1) {
    return false;
  }
  else if (n == 2) {
    return true;
  }
  else {
    for (int i = 2;i < n;i++) {
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

int countPrimes(int a, int b) {
  int primes = 0;
  for (int i = a;i <= b;i++) {
    if (isPrime(i) == true) {
      primes++;
    }
  }
  return primes;
}

bool isTwinPrime(int n) {
  if (isPrime(n) == true) {
    if (isPrime(n-2) == true || isPrime(n+2) == true) {
      return true;
    }
  }
  return false;
}

int nextTwinPrime(int n) {
  int target = n + 1;
  while (isTwinPrime(target) == false) {
    target++;
  }
  return target;
}
