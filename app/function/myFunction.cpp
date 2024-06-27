#include "myFunction.h"

/// Function protoyp
double SALES_TAX = 0.075;
// Function that computes the seles tax on the subTotal.
double computeTax(double subTotal, double taxRate = SALES_TAX);
// Hello World
void helloWorld();
// Return Values
inline const char *returnText();
// Hello message
void hello(const char *name);
// Multiple Parameters
void sayHello(std::string const &fname, int gae);
// Default Parameter Value is Norway
void countries(std::string const &country = "Norway");
// Add two number
inline int addNumber(int x, int y);
// Pass by reference and swap
void swapNumber(int &x, int &y);
// Pass Arrays as Function Parameters
void myArray(int myNumbers[5]);

// Function overloading with different parameters
// Overload the plusFunc function to work for both int and double
// Multiple functions can have the same name as long as the number and/or type of parameters are different.
inline int plusFunc(int x, int y);
inline double plusFunc(double x, double y);
// Recursion is the technique of making a function call itself
inline int sum(int k);

// Functions prototypes
bool isBoiling(int temperature);
int celsiusToFahrenheit(int celsius);
float celsiusToFahrenheit(float celsius);

// Declaring functions prototypes odd and even
void odd(int x);
void even(int x);