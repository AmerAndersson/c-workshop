// CPP program to demonstrate working of array
#include <algorithm>
#include <array>
#include <cstring>
#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  // construction uses aggregate initialization
  // double-braces required
  std::array<int, 5> arr1{{3, 4, 5, 1, 2}};
  std::array<int, 5> arr2 = {1, 2, 3, 4, 5};
  // arrays of string
  std::array<std::string, 2> arr3 = {{std::string("a"), "b"}};
  // arrays of char
  std::array<signed char, 26> arr = {'A', 'B', 'C', 'D', 'E', 'F',
                                     'G', 'H', 'I', 'J', 'K', 'L',
                                     'M', 'N', 'O', 'P', 'Q', 'R',
                                     'S', 'T', 'U', 'V', 'W', 'X',
                                     'Y', 'Z'};
  // arrays of int
  std::array<unsigned int, 26> a = {'A', 'B', 'C', 'D', 'E', 'F',
                                    'G', 'H', 'I', 'J', 'K', 'L',
                                    'M', 'N', 'O', 'P', 'Q', 'R',
                                    'S', 'T', 'U', 'V', 'W', 'X',
                                    'Y', 'Z'};
  for (auto &i : arr) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // prints ASCII char
  std::cout << "ASCII char: " << std::endl;
  std::cout << arr[0] << " " << arr[1] << std::endl;
  std::cout << arr[2] << " " << arr[3] << std::endl;
  std::cout << arr[4] << " " << arr[5] << std::endl;
  std::cout << arr[6] << " " << arr[7] << std::endl;
  std::cout << arr[8] << " " << arr[9] << std::endl;
  std::cout << std::endl;

  // ASCII val of 'A' =65 and 'Z' = 90
  std::cout << "ASCII val1: ";
  for (auto &r : a) {
    std::cout << r << " ";
  }
  std::cout << std::endl;
  std::cout << "ASCII val2: ";
  std::cout << a.front() << " " << a.back() << std::endl;

  std::array<unsigned int, 3> sw = {'G', 'f', 'G'};   // ASCII val of 'G' =71
  std::array<unsigned int, 3> sw1 = {'M', 'M', 'P'};  // ASCII val of 'M' = 77 and 'P' = 80

  // false ( not empty)
  if (sw.empty()) {
    std::cout << "sw is empty" << std::endl;
  } else {
    std::cout << "sw is not empty" << std::endl;
  }

  //  element stored at a specific location
  std::cout << "location: ";
  std::cout << sw.at(2) << " " << sw1.at(2) << std::endl;
  std::cout << std::endl;

  std::cout << "SWING Val: ";
  sw.swap(sw1);  // now sw = {M,M,P}
  std::cout << sw.front() << " " << sw.back() << std::endl;

  std::cout << "Sizes of arrays are" << '\n';
  std::cout << arr1.size() << '\n';
  std::cout << arr2.size() << '\n';
  std::cout << arr3.size() << '\n';
  std::cout << std::endl;

  std::array<int, 5> arrFill;
  arrFill.fill(1);
  std::cout << "Fill Array: ";
  for (int i : arrFill)
    std::cout << arrFill[i] << ' ';
  std::cout << std::endl;

  std::cout << "Initial Arr1: ";
  for (auto i : arr1)
    std::cout << i << ' ';
  std::cout << std::endl;

  // container operations are supported
  std::sort(arr1.begin(), arr1.end());

  std::cout << "Sorted Arr1: ";
  for (auto i : arr1)
    std::cout << i << ' ';
  std::cout << std::endl;

  // Filling ar2 with 10
  arr2.fill(10);

  std::cout << "Filled arr2: ";
  for (auto i : arr2)
    std::cout << i << ' ';
  std::cout << std::endl;

  // ranged for loop is supported
  std::cout << "Arr3: ";
  for (auto &s : arr3)
    std::cout << s << ' ';
  std::cout << std::endl;

  std::array<int, 10> arrSize;
  std::cout << "Size: " << arrSize.size() << '\n';         // total num of indexes
  std::cout << "MaxSize: " << arrSize.max_size() << '\n';  // total maximum num of indexes
  std::cout << "Sizeof: " << sizeof(arrSize) << '\n';      // total size of array in bytes

  /**
   * This function returns the pointer to the first element of the array object.
   * Because elements in the array are stored in contiguous memory locations.
   * This data( ) function return us the base address of the string/char type object.
   */
  const char *str = "GeeksforGeeks";
  std::array<char, 14> arrData;
  memcpy(arrData.data(), str, 14);
  std::cout << "Data: ";
  std::cout << arrData.data() << std::endl;

  // create an array in c++11

  return 0;
}
