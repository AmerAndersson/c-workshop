#include <iostream>

int main() {
  // Type Conversions

  bool b = 42;           // b is true
  int i = b;             // i has value 1
  i = 3.14;              // i has value 3
  double pi = i;         // pi has value 3.0
  unsigned char c = -1;  // assuming 8-bit chars, c has value 255
  signed char c2 = 255;  // assuming 8-bit chars, the value of c2 is undefined

  std::cout << "b= "<< b << std::endl;
  std::cout << "i= "<< i << std::endl;
  std::cout << "pi= "<< pi << std::endl;
  std::cout << "c= "<< c << std::endl;
  std::cout << "c2= "<< c2 << std::endl;

  //...
  return 0;
}
