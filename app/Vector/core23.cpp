
#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>
/**
 * @brief  C++ feature 23
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */

// instead of implicit of this
// explicitly specify the object paramter
class Cell {
   public:
    void seValue(this Cell& self, double value) {
        self.m_value = value;
    }

   private:
    double m_value{};
};

// Class has const och none-const ref-qualified member
// Delegating to hepler methods -> Cumbersome
class Person {
   public:
    Person(std::string name) : m_name{std::move(name)} {}

    template <class Self>
    auto&& GetName(this Self&& self) {
        return std::forward<Self>(Self).m_name;
    }

   private:
    std::string m_name;
};
// Allows for recursive lambda expressions
// This in lambda accesses the object that contains the lambda,
// not the lambda instace itself!
// With deducing this:
auto fabonacci = [](this auto self, int n) {
    if (n < 2) {
        return n;
    }
    return self(n - 1) + self(n - 2);
};
/// Copy an object in c++
/// auot(x) or auto{x}
/// Copy is prvalue
void process(int&& value) { std::println("{}", value); }
void process_all(const std::vector<int>& data) {
    for (auto& i : data) {
        process(auto(i));
    }
}

// Allows you to write ref-qualified member differently
struct S {
    void f() & { std::cout << "lvalue\n"; }
    void f() && { std::cout << "rvalue\n"; }
};

/*
void f(this Data&);
void g(this const Data&);
void h(this Data&&);
*/
int main() {
    // call
    Cell cell;
    cell.seValue(1.2);

    // Call S
    S s;
    s.f();             // prints "lvalue"
    std::move(s).f();  // prints "rvalue"
    S().f();           // prints "rvalue"

    // Call fabonacci
    fabonacci(4);
    return 0;
}
