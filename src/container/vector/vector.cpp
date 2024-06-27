#include <initializer_list>
#include <iostream>
#include <string>
#include <vector>

template <class T>
struct S {
  std::vector<T> v;

  S(const std::initializer_list<T> l) : v(l) {
    std::cout << "constructed with a " << l.size() << "-element list\n";
  }
  void append(std::initializer_list<T> l) {
    v.insert(v.end(), l.begin(), l.end());
  }
  std::pair<const T*, std::size_t> c_arr() const {
    return {&v[0], v.size()};  // copy list-initialization in return statement
                               // this is NOT a use of std::initializer_list
  }
};

// template <class T>
// void temp_fn(T) {}

int main() {
  // create an object of vector
  S<int> s = {1, 2, 3, 4, 5};  // copy list-initialization
  s.append({6, 7, 8});
  std::cout << "The vector now has " << s.c_arr().second << " ints:\n";
  for (auto i : s.v)
    std::cout << i << " ";
  std::cout << "\n";

  std::cout << "Range-for over brace-init-list: \n";
  // the rule for auto makes this ranged-for work
  for (auto x : {-1, -2, -3})
    std::cout << x << ' ';
  std::cout << '\n';

  auto al = {10, 11, 12};  // special rule for auto
  std::cout << "The list bound to auto has size() = " << al.size() << '\n';

  // temp_fn<std::initializer_list<int>>({1, 2, 3});  // OK
  // temp_fn<std::vector<int>>({1, 2, 3});            // also OK
  std::cout << "\n";

  // create an vector in c++11
  std::vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8};

  // loop through an element
  for (auto it = v1.begin(); it != v1.end(); ++it) {
    std::cout << *it << ' ';
  }
  std::cout << '\n';

  return 0;
}
