#include <iostream>

namespace first {
  int x = 1;
}

namespace second {
  int x = 2;
}


int main() {
  // using namespace second;
  using std::string;
  using std::cout;

  int x = 10;
   string firstName = "hello";

  cout << first::x;

  return 0;
}