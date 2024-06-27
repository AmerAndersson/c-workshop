#include <iostream>

const double pi = 3.14159;
const char newline = '\n';

/**
 * @brief  main program  data type
 * @author: Amer Andersson
 * @country: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */

int main() {
    using namespace std;
    double r = 5.0;  // radius
    double circle;

    circle = 2 * pi * r;
    cout << "Circle: " << circle << newline;
    cout << newline;
    cout << "---------" << newline;

    // operating with variables
    int as, bs;
    int result;

    // process
    as = 5;
    bs = 2;
    as = as + 1;
    result = as - bs;
    cout << "Result: " << result << newline;
    cout << "---------" << newline;

    int x = 5, y = 6, z = 50;
    cout << "x + y + z: " << x + y + z << newline;
    cout << "---------" << newline;

    int x1, y1, z1;
    x1 = y1 = z1 = 50;
    cout << "x1 + y1 + z1: " << x1 + y1 + z1 << newline;
    cout << "---------" << newline;

    // A list of all assignment operators:
    int sum1 = 100 + 50;     // 150 (100 + 50)
    int sum2 = sum1 + 250;   // 400 (150 + 250)
    int sum3 = sum2 + sum2;  // 800 (400 + 400)
    cout << sum1 << newline;
    cout << sum2 << newline;
    cout << sum3 << newline;
    cout << "---------" << newline;

    // Scientific Numbers
    // "e" to indicate the power of 10
    int myNum1 = 1000;
    float f1 = 35e3;
    double d1 = 12E4;
    cout << myNum1 << endl;
    cout << "f1: " << f1 << newline;
    cout << "d1: " << d1 << newline;
    cout << "---------" << newline;

    // Constants integer
    const int minutesPerHour = 60;
    const float PI = 3.14;
    cout << minutesPerHour << newline;
    cout << "Pi: " << PI << newline;
    cout << "---------" << newline;

    /// Float type
    float nr1 = 15;
    float nr2 = 10;
    float sum = nr1 + nr2;
    cout << "Sum: " << sum << newline;
    cout << "---------" << newline;

    char a1 = 65, b1 = 66, c1 = 67;
    cout << a1 << newline;
    cout << b1 << newline;
    cout << c1 << newline;
    cout << "---------" << newline;

    char myChar = 'A';
    char myCh = 97;
    char name[6] = "Kalle";
    char names[9] = "Anderson";

    // Data Types
    int myNum = 5;              // Integer (whole number) (2 or 4 byte)
    float myFloatNum = 5.99;    // Floating point number (4 byte)
    double myDoubleNum = 9.98;  // Floating point number (8 byte)
    char myLetter = 'D';        // Character (1 byte)
    bool myBoolean = true;      // Boolean (1 byte) true = 1 and false = 0
    char grade = 'D';           // Used to store a  single character
    string myText = "Hello";    // String type is used to store a sequence of characters (text)

    cout << "Char1: " << myChar << newline;
    cout << "Char2: " << myCh << newline;
    cout << name << newline;
    cout << names << newline;
    cout << myText << newline;
    cout << "---------" << newline;

    int na, nb;
    cout << "Enter some number: ";
    cin >> na;
    cout << "Enter some number to: ";
    cin >> nb;
    int nc = na + nb;
    cout << "The total is : " << nc << newline;
    cout << "---------" << newline;

    // Boolean
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << newline;
    cout << isFishTasty << newline;
    cout << "---------" << newline;

    // Boolean Expressions
    int myAge = 25;
    int votingAge = 18;
    cout << (myAge >= votingAge) << newline;
    cout << "---------" << newline;

    /// Character Types
    char myGrade = 'A';
    char a = 65, b = 66, c = 67;
    cout << a << newline;
    cout << b << newline;
    cout << c << newline;
    cout << "myGrade: " << myGrade << newline;
    cout << "---------" << newline;

    int x2 = 10;
    int y2 = 9;
    cout << (x2 > y2) << newline;  // returns 1 (true), because 10 is higher than 9
    cout << (9 < 10) << newline;   // returns 1 (true), because 9 is less than 10
    int x3 = 10;
    cout << (x3 == 10) << newline;  // returns 1 (true), because the value of x is equal to 10
    cout << (10 == 15) << newline;  // returns 0 (false), because 10 is not equal to 15

    // This operator accepts one parameter,
    // which can be either a type or a variable,
    // and returns the size in bytes of that type or object
    // x1 = sizeof(char);

    // Relational and comparison operators
    int v = 5;
    int s = 3;
    cout << (v > s);   // returns 1 (true) because 5 is greater than 3
    cout << (v == s);  // returns 0 (false) because 5 is not equal to 3
    cout << (v != s);  // returns 1 (true) because 5 is not equal to 3
    cout << (v > s);   // returns 1 (true) because 5 is greater than 3
    cout << (v < s);   // returns 0 (false) because 5 is not less than 3
    cout << (v >= s);  // returns 1 (true) because five is greater than, or equal, to 3
    cout << (v <= s);  // returns 0 (false) because 5 is neither less than or equal to 3

    /// Logical operators ( !, &&, || )
    !(5 == 5);              // evaluates to false because the expression at its right (5 == 5) is true
    !(6 <= 4);              // evaluates to true because (6 <= 4) would be false
    !true;                  // evaluates to false
    !false;                 // evaluates to true
    ((5 == 5) && (3 > 6));  // evaluates to false ( true && false )
    ((5 == 5) || (3 > 6));  // evaluates to true ( true || false )
    // Conditional ternary operator ( ? )
    (7 == 5 ? 4 : 3);      // evaluates to 3, since 7 is not equal to 5.
    (7 == 5 + 2 ? 4 : 3);  // evaluates to 4, since 7 is equal to 5+2.
    (5 > 3 ? a : b);       // evaluates to the value of a, since 5 is greater than 3.
    (a > b ? a : b);       // evaluates to whichever is greater, a or b.

    // Signed Integers
    short s = 7;
    int i = 12347;
    long l1 = -7856974990L;
    long long l2 = 89565656974990LL;
    // ' digit separator C++14
    long l3 = 512'232'697'499;

    // Unsigned Integers
    unsigned u1 = 12347U;
    unsigned long u2 = 123478912345UL;
    unsigned long long u3 = 123478912345ULL;
    // non-decimal literals
    unsigned x = 0x4A;        // hexadecimal
    unsigned b = 0b10110101;  // binary C++14

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

    (a <=> b) < 0;   // if a < b
    (a <=> b) > 0;   // if a > b
    (a <=> b) == 0;  // if a and b are equal / equivalent
    /*
    3-way comparisons return a comparison category value that can be compared to literal 0.
    The returned value comes from one of three possible categories: std::strong_ordering,
    std::weak_ordering or std::partial_ordering.
    */
    4 <=> 6;  // → std::strong_ordering::less
    5 <=> 5;  // → std::strong_ordering::equal
    8 <=> 1;  // → std::strong_ordering::greater

    // Memory Sizes of Fundamental Types
    // All type sizes are a multiple of
    sizeof(char);
    cout << sizeof(char);   // 1
    cout << sizeof(bool);   // 1
    cout << sizeof(short);  // 2
    cout << sizeof(int);    // 4
    cout << sizeof(long);   // 8

    // number of bits in a char
    char CHAR_BIT;
    cout << CHAR_BIT;  // 8
    
    char c = 'A';
    bool b = true;
    int i = 1234;
    long l = 12;
    short s = 8;

    return 0;
}
