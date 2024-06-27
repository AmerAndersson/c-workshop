#include <iostream>
using namespace std;

const double pi = 3.14159;
const char newline = '\n';

/**
 * @brief  main program  boolean
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */

int main()
{

    // Boolean
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << newline;
    cout << isFishTasty << newline;
    cout << "---------" << newline;

    // Boolean Expressions
    int x = 10;
    int y = 9;
    std::cout << (x > y) << newline;    // returns 1 (true), because 10 is higher than 9
    std::cout << (10 > 9) << newline;   // returns 1 (true), because 10 is higher than 9
    std::cout << (x == 10) << newline;  // returns 1 (true), because the value of x is equal to 10
    std::cout << (10 == 15) << newline; // returns 0 (false), because 10 is not equal to 15

    // Real Life Example
    int myAge = 25;
    int votingAge = 18;
    cout << (myAge >= votingAge) << newline;

    if (myAge >= votingAge)
    {
        cout << "Old enough to vote!" << newline;
    }
    else
    {
        cout << "Not old enough to vote." << newline;
    }

    // Outputs: Old enough to vote!
    cout << "---------" << newline;

    int x2 = 10;
    int y2 = 9;
    cout << (x2 > y2) << newline; // returns 1 (true), because 10 is higher than 9
    cout << (9 < 10) << newline;  // returns 1 (true), because 9 is less than 10
    int x3 = 10;
    cout << (x3 == 10) << newline; // returns 1 (true), because the value of x is equal to 10
    cout << (10 == 15) << newline; // returns 0 (false), because 10 is not equal to 15
    cout << "---------" << newline;

    // This operator accepts one parameter,
    // which can be either a type or a variable,
    // and returns the size in bytes of that type or object
    // x1 = sizeof(char);

    // Relational and comparison operators
    int v = 5;
    int s = 3;
    cout << (v > s) << newline;  // returns 1 (true) because 5 is greater than 3
    cout << (v == s) << newline; // returns 0 (false) because 5 is not equal to 3
    cout << (v != s) << newline; // returns 1 (true) because 5 is not equal to 3
    cout << (v > s) << newline;  // returns 1 (true) because 5 is greater than 3
    cout << (v < s) << newline;  // returns 0 (false) because 5 is not less than 3
    cout << (v >= s) << newline; // returns 1 (true) because five is greater than, or equal, to 3
    cout << (v <= s) << newline; // returns 0 (false) because 5 is neither less than or equal to 3
    cout << "---------" << newline;

    /// Logical operators ( !, &&, || )
    !(5 == 5); // evaluates to false because the expression at its right (5 == 5) is true
    !(6 <= 4); // evaluates to true because (6 <= 4) would be false
    !true;     // evaluates to false
    !false;    // evaluates to true

    ((5 == 5) && (3 > 6)); // evaluates to false ( true && false )
    ((5 == 5) || (3 > 6)); // evaluates to true ( true || false )

    // Conditional ternary operator ( ? )
    (7 == 5 ? 4 : 3);     // evaluates to 3, since 7 is not equal to 5.
    (7 == 5 + 2 ? 4 : 3); // evaluates to 4, since 7 is equal to 5+2.

    int a = 20;
    int b = 10;
    (5 > 3 ? a : b); // evaluates to the value of a, since 5 is greater than 3.
    (a > b ? a : b); // evaluates to whichever is greater, a or b.

    return 0;
}
