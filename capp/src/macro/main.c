#include <stdio.h>

// Define any macros or constants that will be used throughout the program.
#define PI 3.14159
// Global function declaration
void calculateRadius();

int main() {
  calculateRadius();
  return 0;
}

// Global function definition
void calculateRadius() {
  float radius = 5.0;
  float area = PI * radius * radius;
  printf("Area of the circle: %f\n", area);
}