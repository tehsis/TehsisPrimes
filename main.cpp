#include <iostream>
#include <cstdlib>
#include "prime.h"
using namespace std;
using namespace Tehsis;

int main(int argc, char* argv[]) {
  if (argc < 2) {
    cout << "Error! Must provide a max" << endl;
    return 1;
  }

  unsigned long to = atol(argv[1]);

  Prime p(to);

  cout << p.getValue();

  return 0;
}
