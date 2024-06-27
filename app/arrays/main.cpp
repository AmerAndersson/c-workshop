#include <iostream>

// Program for testing function
// Arrays
// By Amer Anderson
// set numItems array values to all ones
void setArrToOnes(int numItem, int arr[]);

// print first numItems value  from array arr
void printValues(int numItem, int arr[]);

int main() {
  int score[10] = {1, 2, 3, 4};
  int allInitialized[] = {6, 5, 4, 3, 2, 1};
  int myStuff[10][10];

  std::cout << "Score" << std::endl;
  printValues(10, score);

  std::cout << "myStuff1" << std::endl;
  printValues(10, myStuff[0]);

  std::cout << "myStuff2" << std::endl;
  printValues(10, myStuff[1]);

  std::cout << "allInitialized" << std::endl;
  printValues(6, allInitialized);
  std::cout << std::endl;
}

void setArrToOnes(int numItem, int arr[]) {
  for (int i = 0; i < numItem; i++) {
    arr[i] = 1;
  }
}

void printValues(int numItem, int arr[]) {
  for (int i = 0; i < numItem; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";
}