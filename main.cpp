#include <iostream>
#include <cstdlib>
#include "prime.h"
using namespace std;

int main(int argc, char* argv[]) {
  if (argc < 2) {
    cout << "Error! Must provide a max" << endl;
    return 1;
  }

  long int to = atol(argv[1]);

  Prime p(to);

  cout << p.getMaxPrime() << endl;

  return 0;
}