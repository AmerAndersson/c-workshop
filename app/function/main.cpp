#include <iostream>
#include <string>

#include "myFunction.cpp"

int main() {
    // Test overloading 1:
    int fahrenheitI = celsiusToFahrenheit(100);
    std::cout << "Temperature: " << fahrenheitI << "°F" << newline;

    // Test overloading 2:
    float fahrenheitF = celsiusToFahrenheit(97.3f);
    std::cout << "Temperature: " << fahrenheitF << "°F" << newline;

    std::cout << "Enter temperature: ";
    int temperature;
    std::cin >> temperature;
    // controll if water is boiling
    if (isBoiling(temperature)) {
        std::cout << "The water is boiling!\n";
    } else {
        std::cout << "The water is not hot enough yet..\n";
    }
    std::cout << "------------" << newline;

    // Calling
    helloWorld();

    const char name[5] = "John";
    hello(name);

    std::string kid1 = "Liam";
    std::string kid2 = "Jenny";
    std::string kid3 = "Anja";
    int age1 = 3, age2 = 14, age3 = 30;
    sayHello(kid1, age1);
    sayHello(kid2, age2);
    sayHello(kid3, age3);

    // const char *msg = ReturnText();
    std::cout << returnText() << newline;
    std::cout << "------------" << newline;

    // Countries
    countries("Sweden");
    countries("Danmark");
    countries();
    countries("USA");
    std::cout << "------------" << newline;

    // Add two numbers
    int totals = addNumber(10, 15);
    std::cout << totals << newline;
    std::cout << "------------" << newline;

    // Pass By Reference
    int firstNum = 5;
    int secondNum = 8;

    std::cout << "Before swaping: " << newline;
    std::cout << "firstNum = " << firstNum << ", SecondNum = " << secondNum << newline;

    // Call the function, which will change the values of firstNum and secondNum
    swapNumber(firstNum, secondNum);
    std::cout << "\nAfter swaping: " << newline;
    std::cout << "firstNum = " << firstNum << ", SecondNum = " << secondNum << newline;
    std::cout << "------------" << newline;

    // Calling Function
    int myNumbers[5] = {10, 20, 30, 40, 50};
    myArray(myNumbers);
    std::cout << "------------" << newline;

    /// Callin Function overloading with different parameters
    int numI = plusFunc(5, 8);
    double numD = plusFunc(4.3, 6.26);
    std::cout << "Int = " << numI << newline;
    std::cout << "Double = " << numD << newline;
    std::cout << "------------" << newline;

    /**
     * Recursion is the technique of making a function call itself
     *  * 10 + sum(9)
     * 10 + ( 9 + sum(8) )
     * 10 + ( 9 + ( 8 + sum(7) ) )
     * ...
     * 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
     * 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
     */
    int result = sum(10);
    std::cout << result << newline;
    std::cout << "------------" << newline;

    double subTotal = 10.0;
    double total = subTotal + computeTax(subTotal);
    double total2 = subTotal + computeTax(subTotal, 0.06);

    std::cout << "Total: " << total << newline;
    std::cout << "Total2: " << total2 << newline;
    std::cout << "------------" << newline;

    int i;
    do {
        std::cout << "Please, enter number (0 to exit): ";
        std::cin >> i;
        odd(i);
    } while (i != 0);

    return 0;
}
