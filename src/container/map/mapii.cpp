// C++ program to illustrate the begin and end iterator
#include <iostream>
#include <map>
#include <string>

int main() {
  // Create a map of strings to integers
  std::map<std::string, int> mp;

  // Insert some values into the map
  mp["one"] = 1;
  mp["two"] = 2;
  mp["three"] = 3;
  mp["four"] = 4;
  mp["five"] = 5;
  mp["six"] = 6;
  mp["seven"] = 7;
  mp["eight"] = 8;
  mp["nine"] = 9;
  mp["ten"] = 10;

  // Iterate over the map
  for (auto it = mp.begin(); it != mp.end(); ++it) {
    std::cout << "Key: " << it->first << ", "
              << "Value: " << it->second << std::endl;
  }
  // Print the size of the map
  std::cout << "Size of map: " << mp.size() << std::endl;
  std::cout << "============================" << std::endl;
  // Get an iterator pointing to the first element in the
  // map
  std::map<std::string, int>::iterator it = mp.begin();

  // Iterate through the map and print the elements
  while (it != mp.end()) {
    std::cout << "Key: " << it->first << ", "
              << "Value: " << it->second << std::endl;
    ++it;
  }
  // Print the size of the map
  std::cout << "Size of map: " << mp.size() << std::endl;
  std::cout << "============================" << std::endl;
  // Get an iterator pointing to the last element in the
  // map
  it = mp.end();

  // Iterate through the map and print the elements
  while (it != mp.begin()) {
    --it;
    std::cout << "Key: " << it->first << ", "
              << "Value: " << it->second << std::endl;
  }
  // Print the size of the map
  std::cout << "Size of map: " << mp.size() << std::endl;
  return 0;
}
