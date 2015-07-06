#include <cassert>
#include <iostream>
#include "../prime.h"
using namespace std;
using namespace Tehsis;

#define test(a, m) assert(a); cout << m << endl;

int main() {
  Prime p(5);
  Prime q(500);
  Prime r(1024);
  
  test(p == 3, "3 is the maximum prime number for 5");
  test(q == 499, "499 is the maximum prime number for 500");
  test(r == 1021, "1021 is the maximum prime number for 1024");
}
