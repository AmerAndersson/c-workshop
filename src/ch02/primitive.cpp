#include <iostream>

/**
The arithmetic types are divided into two categories: integral types (which include
character and boolean types) and floating-point types.
The size of—that is, the number of bits in—the arithmetic types varies across
machines. The standard guarantees minimum sizes.
 =================================================================
 bool         boolean NA
 char         character 8 bits
 wchar_t      wide character 16 bits
 char16_t     Unicode character 16 bits
 char32_t     Unicode character 32 bits
 short        short integer 16 bits
 int          integer 16 bits
 long         long integer 32 bits
 long long    long integer 64 bits
 float        single-precision floating-point 6 significant digits
 double       double-precision floating-point 10 significant digits
 long double  extended-precision floating-point 10 significant digits
 =====================================================================
 */

int main() {
  // Expressions Involving Unsigned Types
  unsigned u = 10;
  int i = -42;
  std::cout << i + i << std::endl;  // prints -84
  std::cout << u + i << std::endl;  // if 32-bit ints, prints 4294967264

  /// Primitive Built-in Types
  /// The fact that an unsigned cannot be less than zero.
  unsigned u1 = 42, u2 = 10;
  std::cout << u1 - u2 << std::endl;  // ok: result is 32
  std::cout << u2 - u1 << std::endl;  // ok: but the result will wrap around prints 4294967264
  std::cout << "------------" << std::endl;

  // also affects how we write loops. we can write a loop that used the decrement operator
  // to print the numbers from 10 down to 0
  // Expressions Involving Signed Types
  // We can also use signed types in arithmetic expressions.
  // Prints: 10 9 8 7 6 5 4 3 2 1 0

  for (int it = 10; it >= 0; --it) {
    std::cout << it << " ";
  }
  std::cout << std::endl;
  std::cout << "------------" << std::endl;

  // Using a while lets us decrement before(rather than after) printing our value
  // start the loop one past the first element we want to print
  // decrement first, so that the last iteration will print 0
  // Prints: 10 9 8 7 6 5 4 3 2 1 0

  unsigned u3 = 11;
  while (u3 > 0) {
    --u3;
    std::cout << u3 << " ";
  }
  std::cout << std::endl;
  std::cout << "------------" << std::endl;

  /// Integer and Floating-Point Literals
  /// we can write the value 20 in any of the following three ways:
  /// 20 /* decimal */ 024 /* octal */ 0x14 /* hexadecimal */

  /// The type of a string literal is array of constant chars
  /// The compiler appends a null character (’\0’) to every string literal.
  /// the literal ’A’ represents the single character A,
  /// whereas the string literal "A" represents an array of two characters,
  /// the letter A and the null character (’\0’):
  std::string a = "A";
  const char b = 'A';

  // multiline string literal
  std::cout << "a really, really long string literal "
               "that spans two lines"
            << std::endl;
  std::cout << "------------" << std::endl;

  /**
   * Escape Sequences
   * Some characters, such as backspace or control characters, have no visible image.
   * Such characters are nonprintable. Other characters (single and double quotation
   * marks, question mark, and backslash) have special meaning in the language. Our
   * programs cannot use any of these characters directly.
   * Instead, we use an escape sequence to represent such characters.
   * An escape sequence begins with a backslash.
   * The language defines several escape sequences:
   */

  /**
   * The language defines several escape sequences:
   * prints a tab followed by 'Hello' an newline
   * newline \n horizontal tab \t alert (bell) \a
   * vertical tab \v backspace \b double quote \"
   * backslash \\ question mark \? single quote \’
   * carriage return \r formfeed \f
   * \7 (bell) \12 (newline) \40 (blank)
   * \0 (null) \115 (’M’) \x4d (’M’)
   */
  std::cout << "\tHello\n";
  std::cout << "\aHello\n";
  std::cout << "\vHello\n";
  std::cout << "\bHello\n";
  std::cout << "\"Hello\n";
  std::cout << "\\bHello\n";
  std::cout << "\?Hello\n";
  std::cout << "\'bHello\n";
  std::cout << "\rHello\n";
  std::cout << "\fbHello\n";
  std::cout << "-----------" << std::endl;
  std::cout << "\7(bell)\n";
  std::cout << "\12(newline)\n";
  std::cout << "\40(blank)\n";
  std::cout << "\0(null)\n";
  std::cout << "\115('M')\n";
  std::cout << "\x4d('M')\n";

  int month = 9, day = 7;
  std::cout << month << ' ' << day << std::endl;
  std::cout << "Who goes with F\145rgus ?\012 " << std::endl;
  std::cout << "3.14e1L" << std::endl;
  std::cout << "1024f" << std::endl;
  std::cout << "3.14L" << std::endl;

  return 0;
}
