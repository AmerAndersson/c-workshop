#include <iostream>

enum class Months;
int max(int x, int y);

double square(double x);

void print_squares(int n);

int main() {
  int i = static_cast<int>(Months::mar);
  // int i = 0;
  // std::cin >> i;
  //  make sure i ≥ 1 and ≤ 12 …
  Months m1 = static_cast<Months>(i);
  std::cout << i << '\n';
  std::cout << "----" << '\n';

  std::cout << max(12, 10) << '\n';
  std::cout << "----" << '\n';
  print_squares(8);
  return 0;
}
enum class Months {
  jan = 1,
  feb = 2,
  mar = 3,
  apr = 4,
  may = 5,
  jun = 6,
  jul = 7,
  aug = 8,
  sep = 9,
  oct = 10,
  nov = 11,
  dec = 12
};
int max(int x, int y) {
  if (x > y)
    return x;
  else
    return y;
}
double square(double x) {
  return (x * x);
}
void print_squares(int n) {
  for (int i = 1; i <= n; ++i)
    std::cout << square(i) << '\n';
}