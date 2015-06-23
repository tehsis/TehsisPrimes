#include "prime.h"

#include <iostream>
#include <cstdlib>
using namespace std;

// Generates list of numbers 
// and marks those that are not prime
// following the Sieve of Eratosthenes
Prime::Prime(const unsigned long& max) {

  vector<bool> nList(max+1, true);
  
  unsigned long p;
  for(int p=2; p<=max; p++) { 
    if (nList[p]) {
      value = p;
      for(unsigned long i=p*p; i<=max; i+=2*p) {
        nList[i] = false;
      }
    }
  }
}

long int Prime::getValue() {
  return value;
}

bool Prime::operator==(unsigned long lv) {
  return value == lv;
}
