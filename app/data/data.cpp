#include <cstdint>
#include <iostream>
#include <limits>

const double pi = 3.14159;
const char newline = '\n';

/**
 * @brief  main program  data type
 * @author: Amer Andersson
 * @return 0 when program execution completes successfully.
 */

int main() {
  using namespace std;

  // Signed Integers
  char c = 'A';
  bool y = true;
  int i = 1234;
  long l = 12;
  short s = 7;
  long l1 = -7856974990L;
  long long l2 = 89565656974990LL;
  // ' digit separator C++14
  long l3 = 512'232'697'499;

  // Unsigned Integers
  unsigned u1 = 12347U;
  unsigned long u2 = 123478912345UL;
  unsigned long long u3 = 123478912345ULL;
  // non-decimal literals
  unsigned x = 0x4A;  // hexadecimal
  // unsigned binary = 0b10110101;  // binary C++14

  /*
  Floating Point Types
  float usually IEEE 754 32 bit
  double usually IEEE 754 64 bit
  long double usually 80-bit on x86/x86-64
  */
  float f = 1.88f;
  double d1 = 3.5e38;
  long double d2 = 3.5e38L;  // C++ 11
  // (') digit separator C++14
  double d3 = 512'232'697'499.052;

  // 3 - Way Comparisons With <=>
  // determines the relative ordering of 2 objects:

  // (a <=> b) < 0;   // if a < b
  // (a <=> b) > 0;   // if a > b
  // (a <=> b) == 0;  // if a and b are equal / equivalent

  // Memory Sizes of Fundamental Types
  // All type sizes are a multiple of
  sizeof(char);
  cout << sizeof(char) << std::endl;   // 1
  cout << sizeof(bool) << std::endl;   // 1
  cout << sizeof(short) << std::endl;  // 2
  cout << sizeof(int) << std::endl;    // 4
  cout << sizeof(long) << std::endl;   // 8

  // number of bits in a char
  char CHAR_BIT;
  cout << CHAR_BIT << std::endl;  // 8

  // Sizes Are Platform Dependent and only basic guarantees
  // e.g.,on some 32 - bit platforms : int = long
  sizeof(short) >= sizeof(char);
  sizeof(int) >= sizeof(short);
  sizeof(long) >= sizeof(int);

  // std::numeric_limits<type>
  // smallest negative value:
  cout << std::numeric_limits<double>::lowest() << std::endl;
  // float/double: smallest value > 0
  // integers: smallest value
  cout << std::numeric_limits<double>::min() << std::endl;
  // largest positive value:
  cout << std::numeric_limits<double>::max() << std::endl;
  // smallest difference btw. 1 and next value:
  cout << std::numeric_limits<double>::epsilon() << std::endl;
  return 0;
}
