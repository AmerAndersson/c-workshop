#include <iostream>
#include <string>

#ifndef MYFUNCTION_H
#define MYFUNCTION_H

const char newline = '\n';
// Return Values
inline const char *returnText() {
    return "The message is there!";
}
// Hello message
void hello(const char *name) {
    std::cout << "Hello " << name << "!\n";
}
// Function defination
void helloWorld() {
    std::cout << "Hello World!\n";
}

// Multiple Parameters
void sayHello(std::string const &fname, int age) {
    std::cout << fname << " Refsnes. " << age << " years old." << newline;
}
// Default Parameter Value
void countries(std::string const &country) {
    std::cout << country << newline;
}
inline int addNumber(int x, int y) {
    return x + y;
}

// PFunctions - Pass By Reference
// This can be useful when you need to change the value of the arguments:
void swapNumber(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// Pass Arrays as Function Parameters
void myArray(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {
        std::cout << myNumbers[i] << newline;
    }
}
// Function overloading with different parameters
// Overload the plusFunc function to work for both int and double
inline int plusFunc(int x, int y) {
    return x + y;
}

inline double plusFunc(double x, double y) {
    return x + y;
}
// Recursion is the technique of making a function call itself
inline int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}

//=================FUNCTION================
// IsBoiling: controll if water is boiling
//=========================================
bool isBoiling(int temperature) {
    if (temperature < 100) {
        return false;
    }
    return true;
}

//=================FUNCTION==================
// CelsiuToFahrenheit: Simply convert
// Overloading 1 - with Int:
//===========================================
int celsiusToFahrenheit(int celsius) {
    // calculate fahrenheit
    int fahrenheit = ((celsius * 9) / 5) + 32;
    return fahrenheit;
}

//=================FUNCTION====================
// CelsiuToFahrenheit: Simply convert
// Overloading 1 - with fLOAT:
//=============================================
float celsiusToFahrenheit(float celsius) {
    // calculate fahrenheit
    float fahrenheit = ((celsius * 9) / 5) + 32;
    return fahrenheit;
}
double computeTax(double subTotal, double taxRate) {
    return subTotal * taxRate;
}

void odd(int x) {
    if ((x % 2) != 0)
        std::cout << "It is odd.\n";
    else
        std::cout << "It is even.\n";
}

void even(int x) {
    if ((x % 2) == 0)
        std::cout << "It is even.\n";
    else
        std::cout << "It is odd.\n";
}
#endif