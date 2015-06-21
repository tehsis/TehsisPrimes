#include "prime.h"

// Generates list of numbers 
// and marks those that are not prime
// following the Sieve of Eratosthenes
Prime::Prime(long int& max) {

  // FIX: Merge these two for statements.
  for(long int i=0; i<=max; i++) {
    nList.push_back(true);
  }
  
  long int last;
  long int p =2;
  while(p<=max) {
    if (nList[p]) {
      for(long int i=p+p; i<=max; i+=p) {
        nList[i] = false;
      }
    }

    p++;
  }
}

// Iterates over the generated primes vector
// executing the function passed as parameter
void Prime::getPrimes(void (*cb)(long int)) {
  std::vector<long int> r;
  for(int i=0; i<nList.size(); i++) {
    if(nList[i]) {
      cb(i);
    }
  }
}

// Returns the maximum prime number 
// generated.
long int Prime::getMaxPrime() {
  long int last;
  for (int i=nList.size()-1; i>=0; i--) {
    if (nList[i]) {
      last = i;
      break;
    }
  }

  return last;
}
