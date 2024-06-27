#include <stdio.h>

int main() {
  // There are two types of conversion in C:
  // Implicit Conversion(automatically)
  // Explicit Conversion(manually)

  // Implicit conversion is done automatically by the compiler when assign an int value to a float type
  // Automatic conversion: int to float
  float myFloat = 9;
  printf("The value %f\n", myFloat);

  // Automatically converts the float value 9.99 to an int value of 9:
  int myInt = 9.99;
  printf("The value %d\n", myInt);

  // Explicit conversion is done manually by the programmer
  // when assign an int value to a float type
  // Manual conversion: int to float
  int num1 = 5;
  int num2 = 2;
  float sum = (float)num1 / num2;   //  place the type in front of a variable
  printf("The value %.2f\n", sum);  // 2.500000, removing the extra zeros 2.50

  /**
   * A real-life of data types and type conversion where
   * we create a program to calculate the percentage of a
   * user's score in relation to the maximum score in a game
   */

  // Set the maximum possible score in the game to 500
  int maxScore = 500;
  // The actual score of the user
  int userScore = 423;

  // Calculate the percantage of the user's score in relation to the maximum available score.
  // Convert userScore to float to make sure that the division is accurate

  float percentage = (float)userScore / maxScore * 100.0;

  // Print the percentage
  printf("User's percentage is %.2f\n", percentage);

  return 0;
}