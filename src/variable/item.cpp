#include <iostream>

double applyDiscount(double price, double discount);

int main() {
  // defined price and discount with initialized value
  double price = 109.99;
  double discount = 0.16;
  // call applyDiscount and use the return value to initialize salePrice
  double salePrice = applyDiscount(price, discount);
  std::cout << "Price: " << price << ' ' << "Discount: " << salePrice
            << std::endl;

  double i = 3.14;
  int is = static_cast<int>(3.14);
  std::cout << is << std::endl;

  double wage = 9999.99;
  double salary = wage;
  std::cout << salary << std::endl;

  return 0;
}

double applyDiscount(double price, double discount) { return discount * price; }