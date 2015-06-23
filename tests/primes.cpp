#include <cassert>
#include <iostream>
#include "../prime.h"
using namespace std;

#define test(a, m) assert(a); cout << m << endl;

int main() {
  Prime p(500);
  
  test(p == 499, "499 is the maximum prime number for 500");
}
