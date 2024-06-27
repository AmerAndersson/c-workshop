#include <iostream>
#include <limits>

int main() {
  // produce correct size of various data types on your computer.
  // sizeof() operator to get size of various data types.
  std::cout << "Size of char : " << sizeof(char) << std::endl;
  std::cout << "Size of int : " << sizeof(int) << std::endl;
  std::cout << "Size of short int : " << sizeof(short int) << std::endl;
  std::cout << "Size of long int : " << sizeof(long int) << std::endl;
  std::cout << "Size of float : " << sizeof(float) << std::endl;
  std::cout << "Size of double : " << sizeof(double) << std::endl;
  std::cout << "Size of wchar_t : " << sizeof(wchar_t) << std::endl;

  std::cout << "Int Min: " << std::numeric_limits<int>::min() << std::endl;
  std::cout << "Int Max: " << std::numeric_limits<int>::max() << std::endl;
  std::cout << "Unsigned Int Min: " << std::numeric_limits<unsigned int>::min() <<std::endl;
  std::cout << "Unsigned Int Max: " << std::numeric_limits<unsigned int>::max() << std::endl;
  std::cout << "Long Int Min: " << std::numeric_limits<long int>::min() << std::endl;
  std::cout << "Long Int Max: " << std::numeric_limits<long int>::max() << std::endl;

  std::cout << "Unsigned Long Int Min: " << std::numeric_limits<unsigned long int>::min() << std::endl;
  std::cout << "Unsigned Long Int Max: " << std::numeric_limits<unsigned long int>::max() << std::endl;

  return 0;
}