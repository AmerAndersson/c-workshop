#include <iostream>
#include <string>
#include <vector>

const char newline = '\n';
/**
 * @brief  main program for Object-oriented programming (OOP)
 * @author: Amer Andersson
 * @country: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */
/// Create one Structure in Multiple Variables
struct
{
  std::string brand;
  std::string model;
  int year;
} Car1, Car2;

int main() {
  /// Put data into the first Car
  Car1.brand = "BMW";
  Car1.model = "X5";
  Car1.year = 1999;

  /// Put data into the second Car
  Car2.brand = "Ford";
  Car2.model = "Mustang";
  Car2.year = 1969;

  /// Print the data of the cars
  std::cout << Car1.brand << " " << Car1.model << " " << Car1.year << newline;
  std::cout << Car2.brand << " " << Car2.model << " " << Car2.year << newline;

  return 0;
}
