#include "prime.h"
using namespace Tehsis;

Prime::Prime(const unsigned long& max) : nList(max, true) {
  for(unsigned long p=2; p<max; p++) { 
    if (nList[p]) {
      value = p;
      for(unsigned long i=p+p; i<max; i+=p) {
        nList[i] = false;
      }
    }
  }
}

unsigned long Prime::getValue() {
  return value;
}

bool Prime::operator==(unsigned long lv) {
  return getValue() == lv;
}
