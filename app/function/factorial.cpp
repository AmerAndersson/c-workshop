#include <iostream>
#include <string>

/**
 * function calling itself
 * needs a break condition
 * looks more elegant than loops but in many cases slower
 * recursion depth is limited (by stack size)
 */

int factorial(int n) {
    // break condition:
    if (n < 2) return 1;
    // recursive call: n! = n * (n-1)!
    return (n * factorial(n - 1));
}
int main(int argc, char const *argv[]) {
    auto fact = factorial(4);
    std::cout << fact;
    return 0;
}
