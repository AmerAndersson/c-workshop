#include <iostream>
#include <string>
#include <vector>

const char newline = '\n';
/**
 * @brief  main program for Object-oriented programming (OOP)
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */

// Create a structure variable called myStructure
struct
{
  int myInt;
  std::string myString;

} myStructure;

// Named Structures Use one structure to represent two cars:
// Declare a structure named "car"
struct Car {
  std::string brand;
  std::string model;
  int year;
};

int main() {
  /// Assign values to members of myStructure
  myStructure.myInt = 1000000;
  myStructure.myString = "Hello Structure";
  // Print members of myStructure
  std::cout << myStructure.myInt << newline;
  std::cout << myStructure.myString << newline;
  std::cout << "--------------" << newline;

  // Create a car structure and store it in myCar1;
  Car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Create another car structure and store it in myCar2;
  Car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;

  // Print the structure members
  std::cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << newline;
  std::cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << newline;

  return 0;
}