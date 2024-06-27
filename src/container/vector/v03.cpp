#include <iostream>
#include <vector>

int main() {
  // Create an empty vector c++03
  std::vector<int> v{};

  // Add elements to the vector
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  // Access element at specific postion
  v.at(0);

  // Remove the element
  v.pop_back();

  // loop through an element
  for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
    std::cout << *it << ' ';
  }
  std::cout << '\n';

  return 0;
}
