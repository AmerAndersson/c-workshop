#include <cassert>
#include <iostream>
#include <string>
#include <vector>

int add(int a, int b) {
  return a + b;
}
int main() {
  int x = 3, y = 7;

  assert(add(x, y) == 10);
  std::cout << add(x, y) << std::endl;

  auto arr = std::vector<int>{123, 124, 46, 24313, 41};

  std::cout << "Arrays contains: ";
  for (std::vector<int>::iterator it = arr.begin(); it != arr.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << '\n';

  std::cout << "Arrays contains: ";
  for (auto& val : arr) {
    val = val + 4;
    std::cout << val << " ";
  }
  std::cout << '\n';

  std::cout << "Arrays contains: ";
  for (std::vector<int>::iterator it = arr.begin(); it != arr.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << '\n';
  return 0;
}
