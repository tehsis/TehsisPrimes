#include <vector>

class Prime {
  long int value;
  std::vector<bool> nList;

  public:
  Prime(long int&);
  void getPrimes(void (*fp)(long int));
  long int getMaxPrime();
};
