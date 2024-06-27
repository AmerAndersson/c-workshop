
// Introduction to Math
// By Amer Andersson

#include <iostream>
#include <cmath>

const char newline = '\n';
int main()
{

    // The max(x,y) function
    // can be used to find the highest value of x and y:
    // The min(x,y) function can be used to find the lowest value of x and y:
    // sqrt (square root), round (rounds a number) and log (natural logarithm)
    std::cout << "Max: " << std::max(5, 10) << newline;
    std::cout << "Min: " << std::min(5, 10) << newline;

    std::cout << "Square: " << sqrt(64) << newline;
    std::cout << "Round: " << round(2.6) << newline;
    std::cout << "Log: " << log(2) << newline;
    return 0;
}