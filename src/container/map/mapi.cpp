// CPP Program to demonstrate the implementation in Map
// divyansh mishra --> divyanshmishra101010
#include <iostream>
#include <iterator>
#include <map>

int main() {
  // empty map container
  std::map<int, int> m;

  // inserting elements in random order
  m.insert(std::pair<int, int>(1, 40));
  m.insert(std::pair<int, int>(2, 30));
  m.insert(std::pair<int, int>(3, 60));
  m.insert(std::pair<int, int>(4, 20));
  m.insert(std::pair<int, int>(5, 50));
  m.insert(std::pair<int, int>(6, 70));
  m.insert(std::pair<int, int>(7, 10));
  m.insert(std::pair<int, int>(8, 80));
  m.insert(std::pair<int, int>(9, 90));
  m.insert(std::pair<int, int>(10, 100));

  std::map<int, int> itr;
  // printing map quiz1
  std::cout << "\nThe map quiz1 is : \n";
  std::cout << "\tKEY\tELEMENT\n";
  for (auto itr = m.begin(); itr != m.end(); ++itr) {
    std::cout << "\t" << itr->first << "\t" << itr->second << "\n";
  }
  std::cout << std::endl;

  // Create a map of strings to integers
  std::map<std::string, int> mp;

  // Insert some values into the map
  mp["one"] = 1;
  mp["two"] = 2;
  mp["three"] = 3;
  mp["four"] = 4;
  mp["five"] = 5;
  mp["six"] = 6;

  // Iterate over the map
  for (auto it = mp.begin(); it != mp.end(); ++it) {
    std::cout << "Key: " << it->first << ", "
              << "Value: " << it->second << std::endl;
  }

  // Check if a key is in the map
  if (mp.count("seven") > 0) {
    std::cout << "Key 'seven' is in the map" << std::endl;
  } else {
    std::cout << "Key: 'seven' is not in the map" << std::endl;
  }

  return 0;
}
