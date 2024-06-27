#include <iostream>

/**
 * @brief currVal will keep track of which number we are counting;
 * val will hold each number as we read it from the input:
 * @author: Amer Andersson
 * @return 0 when program execution completes successfully.
 */

int main() {
  // currVal will keep track of which number we are counting; we’ll read new values into val
  int currVal = 0, val = 0;

  // prompt the user for input number:
  std::cout << "Please inter an integers numbers:" << std::endl;

  // read first number and ensure that we have data to process
  if (std::cin >> currVal) {
    // store the count for the current value we’re processing
    int counter = 1;
    // read the remaining numbers
    while (std::cin >> val) {
      // if the values are the same
      if (val == currVal) {
        // add 1 to counter
        ++counter;
      } else {  // otherwise, print the count for the previous value

        std::cout << currVal << " occurs " << counter << " times" << std::endl;
        // remember the new value
        currVal = val;
        // reset the counter
        counter = 1;
      }
    }  // while loop ends
    // remember to print the count for the last value in the file
    std::cout << currVal << " occurs " << counter << " times" << std::endl;
  }  // outermost if statement ends
  return 0;
}
