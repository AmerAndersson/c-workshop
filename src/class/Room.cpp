#include <iostream>

/**
 * @brief Introducing classes
 * In C++ we define our own data structures by defining a class. A class defines a type along
 * with a collection of operations that are related to that type. The class mechanism
 * is one of the most important features in C++. In fact, a primary focus of the design
 * of C++ is to make it possible to define class types that behave as naturally as the
 * built-in types.
 * As we’ve seen, to use a library facility, we must include the associated header.
 * Similarly, we use headers to access classes defined for our own applications. Conventionally,
 * we learn more about (types, expressions, statements, and functions).
 * • To use a class we need to know three things:
 * • What is its name?
 * • Where is it defined?
 * • What operations does it support?
 *
 * A class is a blueprint for the object.
 * We can think of a class as a sketch (prototype) of a house.
 * It contains all the details about the floors, doors, windows,
 * etc - we build the house based on these descriptions.
 * The house is the object.
 *
 * @author: Amer Andersson
 * @return 0 when program execution completes successfully.
 */

// A class Room with a collection of operations
// that are related to that type: (length, width & height).
// represents a newline character.
const char newline = '\n';

class Room {
 private:
  double length = 0.0;
  double width = 0.0;
  double height = 0.0;

 public:
  Room(double l, double w, double h);
  double calculateArea();
  double calculateVolume();
};
// Constructor
Room::Room(double l, double w, double h) : length(l), width(w), height(h) {}

// calculate area
double Room::calculateArea() {
  return length * width;
}
// calculate volume
double Room::calculateVolume() {
  return length * width * height;
}
// print surface area
void printSurfaceArea() {
  // create objects of class Room
  // calculate and display the area and volume of the room
  Room room(42.5, 30.8, 19.2);
  std::cout << "Area of Room: ";
  std::cout << room.calculateArea() << newline;
  std::cout << "Volume of Room: ";
  std::cout << room.calculateVolume() << newline;
}

int main() {
  // call the function surface area
  printSurfaceArea();
  return 0;
}
