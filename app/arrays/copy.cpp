#include <iostream>

/*
 * The main program for application
 * @author Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 */
//  Copy the vector and and Not change the old value:
static int *CopyArray(int *x, int size);

// THE MAIN FUNCTION:
int main() {
  /*
   * Create dynamic vector and save
   * in a part of memory called the heap
   */

  // Assign the size of vector
  const int size = 5;
  int temperature[] = {17, -65, -20, 9, 42};
  int *copy;

  // Print out before copy the value:
  for (int i = 0; i < size; i++) {
    std::cout << temperature[i] << "\n";
  }
  std::cout << "-------" << std::endl;

  // Calling function to copyArray and Not change the value:
  copy = CopyArray(temperature, size);

  // Print out after copy:
  for (int i = 0; i < size; i++) {
    std::cout << copy[i] << "\n";
  }

  // delete[];

  return 0;
}

// Copy the vector and and Not change the old value:
static int *CopyArray(int *x, int size) {
  int *newArray = new int[size];
  for (int i = 0; i < size; i++) {
    newArray[i] = x[i];
  }
  return newArray;
}