#include <vector>

namespace Tehsis {

  class Prime {
    std::vector<bool> nList;
    unsigned long value;

    public:
    Prime(const unsigned long&);
    bool operator==(unsigned long);
    unsigned long getValue();
  };

}
