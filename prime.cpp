#include "prime.h"

#include <iostream>
#include <cstdlib>
using namespace std;

// Generates list of numbers 
// and marks those that are not prime
// following the Sieve of Eratosthenes
Prime::Prime(const unsigned long& max) {

  vector<bool> nList(max, true);
  
  unsigned long p=2;
  for(int p=2; p<max; p++) { 
    if (nList[p]) {
      value = p;
      for(unsigned long i=p*p; i<=max; i+=p) {
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
