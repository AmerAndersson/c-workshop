#include <iostream>
#include <cmath>

// Function protoyp
static double pythagoras(int as, int bs);

int main()
{

    // Enter both sides
    double a, b;
    std::cout << "Enter first side: ";
    std::cin >> a;

    std::cout << "Enter second side: ";
    std::cin >> b;

    double c = pythagoras(a, b);
    std::cout << "Pythagoras: " << c << std::endl;
    return 0;
}

// Function Pythagoras:
static double pythagoras(int as, int bs)
{
    // Calculate Pythagoras a,b:
    int cs = (as * as) + (bs * bs);
    // Calculate Pythagoras c:
    int c = sqrt(cs);
    return cs;
}
