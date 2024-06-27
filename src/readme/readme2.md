# Primitive Built-in Types

## ADVICE: DECIDING WHICH TYPE TO USE

C++, like C, is designed to let programs get close to the hardware when necessary.
The arithmetic types are defined to cater to the peculiarities of various kinds of hardware. Accordingly, the number of arithmetic types in C++ can be bewildering. Most
programmers can (and should) ignore these complexities by restricting the types they
use. A few rules of thumb can be useful in deciding which type to use:

* Use an unsigned type when you know that the values cannot be negative.
* Use int for integer arithmetic. short is usually too small and, in practice, long
often has the same size as int. If your data values are larger than the minimum
guaranteed size of an int, then use long long.
* Do not use plain char or bool in arithmetic expressions. Use them only to hold
characters or truth values. Computations using char are especially problematic
because char is signed on some machines and unsigned on others. If you
need a tiny integer, explicitly specify either signed char or unsigned char.
* Use double for floating-point computations; float usually does not have
enough precision, and the cost of double-precision calculations versus single precision is negligible. In fact, on some machines, double-precision operations
are faster than single. The precision offered by long double usually is unnecessary and often entails considerable run-time cost.

```cpp
  std::cout << "Bool: " << sizeof(bool) << " Bytes" << std::endl;
  std::cout << "Char: " << sizeof(char) << " Bytes" << std::endl;
  std::cout << "Wchar_t: " << sizeof(wchar_t) << " Bytes" << std::endl;
  std::cout << "Char16_t: " << sizeof(char16_t) << " Bytes" << std::endl;
  std::cout << "Char32_t: " << sizeof(char32_t) << " Bytes" << std::endl;
  std::cout << "Short: " << sizeof(short) << " Bytes" << std::endl;
  std::cout << "Int: " << sizeof(int) << " Bytes" << std::endl;
  std::cout << "Long: " << sizeof(long) << " Bytes" << std::endl;
  std::cout << "Long-long: " << sizeof(long long) << " Bytes" << std::endl;
  std::cout << "Float: " << sizeof(float) << " Bytes" << std::endl;
  std::cout << "Double: " << sizeof(double) << " Bytes" << std::endl;
  std::cout << "--------------------------" << std::endl;

  std::cout << "Bool: " << sizeof(bool) << " Bytes" << std::endl;
  std::cout << "Char: " << sizeof(unsigned char) << " Bytes" << std::endl;
  std::cout << "Wchar_t: " << sizeof(wchar_t) << " Bytes" << std::endl;
  std::cout << "Char16_t: " << sizeof(char16_t) << " Bytes" << std::endl;
  std::cout << "Char32_t: " << sizeof(char32_t) << " Bytes" << std::endl;
  std::cout << "Short: " << sizeof(unsigned short) << " Bytes" << std::endl;
  std::cout << "Int: " << sizeof(unsigned int) << " Bytes" << std::endl;
  std::cout << "Long: " << sizeof(unsigned long) << " Bytes" << std::endl;
  std::cout << "Long-long: " << sizeof(unsigned long long) << " Bytes" << std::endl;
  std::cout << "Float: " << sizeof(float) << " Bytes" << std::endl;
  std::cout << "Double: " << sizeof(double) << " Bytes" << std::endl;

  std::cout << "--------------------------" << std::endl;
  std::cout << "Bool: " << sizeof(bool) << " Bytes" << std::endl;
  std::cout << "Char: " << sizeof(signed char) << " Bytes" << std::endl;
  std::cout << "Wchar_t: " << sizeof(wchar_t) << " Bytes" << std::endl;
  std::cout << "Char16_t: " << sizeof(char16_t) << " Bytes" << std::endl;
  std::cout << "Char32_t: " << sizeof(char32_t) << " Bytes" << std::endl;
  std::cout << "Short: " << sizeof(signed short) << " Bytes" << std::endl;
  std::cout << "Int: " << sizeof(signed int) << " Bytes" << std::endl;
  std::cout << "Long: " << sizeof(signed long) << " Bytes" << std::endl;
  std::cout << "Long-long: " << sizeof(signed long long) << " Bytes" << std::endl;
  std::cout << "Float: " << sizeof(float) << " Bytes" << std::endl;
  std::cout << "Double: " << sizeof(double) << " Bytes" << std::endl;


Bool: 1 Bytes
Char: 1 Bytes
Wchar_t: 4 Bytes
Char16_t: 2 Bytes
Char32_t: 4 Bytes
Short: 2 Bytes
Int: 4 Bytes
Long: 8 Bytes
Long-long: 8 Bytes
Float: 4 Bytes
Double: 8 Bytes

  // When we assign one arithmetic type to another:
  bool b = 42;           // b is true
  int i = b;             // i has value 1
  i = 3.14;              // i has value 3
  double pi = i;         // pi has value 3.0
  unsigned char c = -1;  // assuming 8-bit chars, c has value 255
  signed char c2 = 256;  // assuming 8-bit chars, the value of c2 is undefined
```

## What happens depends on the range of the values that the types permit

* When we assign one of the nonbool arithmetic types to a bool object, the
result is false if the value is 0 and true otherwise.
* When we assign a bool to one of the other arithmetic types, the resulting
value is 1 if the bool is true and 0 if the bool is false.
* When we assign a floating-point value to an object of integral type, the value
is truncated. The value that is stored is the part before the decimal point.
* When we assign an integral value to an object of floating-point type, the fractional part is zero. Precision may be lost if the integer has more bits than the
floating-point object can accommodate.
* If we assign an out-of-range value to an object of unsigned type, the result is
the remainder of the value modulo the number of values the target type can
hold. For example, an 8-bit unsigned char can hold values from 0 through
255, inclusive. If we assign a value outside this range, the compiler assigns
the remainder of that value modulo 256. Therefore, assigning –1 to an 8-bit
unsigned char gives that object the value 255.
* If we assign an out-of-range value to an object of signed type, the result is
undefined. The program might appear to work, it might crash, or it might
produce garbage values.

## ADVICE: AVOID UNDEFINED AND IMPLEMENTATION-DEFINED BEHAVIOR

Undefined behavior results from errors that the compiler is not required (and sometimes is not able) to detect. Even if the code compiles, a program that executes an
undefined expression is in error.
Unfortunately, programs that contain undefined behavior can appear to execute
correctly in some circumstances and/or on some compilers. There is no guarantee that
the same program, compiled under a different compiler or even a subsequent release
of the same compiler, will continue to run correctly. Nor is there any guarantee that
what works with one set of inputs will work with another.
Similarly, programs usually should avoid implementation-defined behavior, such
as assuming that the size of an int is a fixed and known value. Such programs are
said to be nonportable. When the program is moved to another machine, code that
relied on implementation-defined behavior may fail. Tracking down these sorts of
problems in previously working programs is, mildly put, unpleasant.

## CAUTION: DON’T MIX SIGNED AND UNSIGNED TYPES

Expressions that mix signed and unsigned values can yield surprising results when
the signed value is negative. It is essential to remember that signed values are automatically converted to unsigned. For example, in an expression like a * b, if a is -1
and b is 1, then if both a and b are ints, the value is, as expected -1. However, if a is
int and b is an unsigned, then the value of this expression depends on how many
bits an int has on the particular machine. On our machine, this expression yields
4294967295.

```cpp
 /**
   * Expressions Involving Unsigned Types
   * Although we are unlikely to intentionally assign a negative value to an object of
   * unsigned type, we can (all too easily) write code that does so implicitly.
   * For example, if we use both unsigned and int values in an arithmetic expression, the
   * int value ordinarily is converted to unsigned. Converting an int to unsigned
   * executes the same way as if we assigned the int to an unsigned
   */
  ///================================================================================
  unsigned u = 10;
  int i = -42;
  std::cout << "i = " << i + i << std::endl;  // prints -84
  // CAUTION: DON’T MIX SIGNED AND UNSIGNED TYPES
  std::cout << "u+i = " << u + i << std::endl;  // if 32-bit ints, prints 4294967264
  std::cout << "------------" << std::endl;
  /// ================================================================================
```

## we can write the value 20 in any of the following three ways

20 /*decimal */ 024 /* octal */ 0x14 /* hexadecimal*/
The type of an integer literal depends on its value and notation. By default, decimal literals are signed whereas octal and hexadecimal literals can be either signed
or unsigned types. A decimal literal has the smallest type of int, long, or long
long (i.e., the first type in this list) in which the literal’s value fits. Octal and hexadecimal literals have the smallest type of int, unsigned int, long, unsigned
long, long long, or unsigned long long in which the literal’s value fits. It is
an error to use a literal that is too large to fit in the largest related type. There are
no literals of type short. We’ll see in Table 2.2 (p. 40) that we can override these
defaults by using a suffix.
Although integer literals may be stored in signed types, technically speaking,
the value of a decimal literal is never a negative number. If we write what appears
to be a negative decimal literal, for example, -42, the minus sign is not part of the
literal. The minus sign is an operator that negates the value of its (literal) operand.
Floating-point literals include either a decimal point or an exponent specified
using scientific notation. Using scientific notation, the exponent is indicated by
either ``E or e:`` 3.14159 3.14159E0 0. 0e0 .00``

```cpp
#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <stack>
#include <string>
#include <vector>
int main() {
  /**
   * In ++x, the value of the variable is incremented first and then It is used in the program.
   * In i++, the value of the variable is assigned first and then It is incremented. Similarly   happens for the *decrement operator
   */
  int x = 5;
  int y = ++x;

  std::cout << "X = " << x << ", "
            << "Y = " << y << std::endl;

  int i = 5;
  int j = i++;

  std::cout << "I = " << i << ", "
            << "J = " << j << std::endl;
  auto b = true;
  auto c = false;
  auto d = 20;
  auto e = 30.0;
  auto f = 30.0f;
  auto g = 30.0l;
  auto h = 'x';
  auto i = "Hello";

  return 0;

}

