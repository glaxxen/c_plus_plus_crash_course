#include <iostream>
#include <cmath>

int main () {

  double x = 4;
  double y = 5.65;
  double z;

  // z = std::max(x, y);
  // z = std::min(x, y);
  // z = pow(2, 3);
  // z = sqrt(25);
  // z = abs(-2);
  // z = round(y);
  // z = ceil(5.33);
  z = floor(5.999999);

  std::cout << z;

  return 0;
}