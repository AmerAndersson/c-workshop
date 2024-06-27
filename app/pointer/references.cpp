#include <iostream>
#include <string>
#include <vector>

/**
 * @brief  main program for Value pass by references
 * Program for tesing function
 * Value pass by references
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */

const char newline = '\n';
double SALES_TAX = 0.075;

// Function that computes the seles tax on the subTotal.
void computeTax(double subTotal, double &tax, double &total, double taxRate = SALES_TAX);
// Function protoyp References:
static void MyFunction(int &x);
// Only valid if referenced object outlives the function!
int &increase(int &x, int delta);

int main() {
    double subTotal = 10.0;
    double tax = 0;
    double total = 0;
    computeTax(subTotal, tax, total);

    std::cout << "Tax: " << tax << "\n";
    std::cout << "Total: " << total << newline;
    std::cout << "=============================" << newline;

    // Enter degree in celsius
    int x = 100;
    std::cout << "Main 1: " << x << newline;
    MyFunction(x);
    std::cout << "Main 2: " << x << newline;
    std::cout << "=============================" << newline;

    /// A reference variable is a "reference" to an existing variable,
    /// and it is created with the `&` operator
    /// Now, we can use either the variable name food or
    /// the reference name meal to refer to the food variable:

    std::string food = "Pizza";  // food variable
    std::string &meal = food;    // reference to food

    std::cout << "Original foot: " << food << newline;
    std::cout << "Original meal: " << meal << newline;
    std::cout << "Memory Address: " << &food << newline;  /// Memory Address
    std::cout << "=============================" << newline;

    // A pointer however, is a variable
    // that stores the memory address as its value.
    std::string foods = "Pizza";  // A string variable declaration
    std::string *ptr = &foods;    // A pointer variable  Pointer declaration that stores the address of food

    // Output the value of food
    std::cout << "Original value: " << foods << newline;
    // Output the memory address of food
    std::cout << "Memory Address: " << &foods << newline;
    // Reference: Output the memory address of food with the pointer
    std::cout << "Memory Address: " << ptr << newline;
    // Dereference: Output the value of food with the pointer
    std::cout << "Dereference: " << *ptr << newline;
    std::cout << "=============================" << newline;

    // Modify Pointers
    std::string foodP = "Pizza";
    std::string *ptrs = &foodP;

    // Output the value of food
    std::cout << "Original value: " << foodP << newline;
    // Output the memory address of food
    std::cout << "Memory Address: " << &foodP << newline;
    //  Access the memory address of food and output its value
    std::cout << "Dereference: " << *ptrs << newline;
    std::cout << "=============================" << newline;

    // Change the value of the pointer
    *ptrs = "Hamburger";
    // Output the new value of the pointer
    std::cout << "New value: " << *ptrs << newline;
    // Output the new value of the food variable
    std::cout << "New value: " << foodP << newline;

    // const References Read-Only Access To An Object
    int i1 = 2;
    int const &cri1 = i1;  // const reference to i

    // auto References Read-Only Access To An Object
    int i = 2;
    double d1 = 2.023;
    double x1 = i + d1;
    auto &ri = i;          // ri:  int &
    auto const &crx = x1;  // crx: double const&

    // References in Range-Based for Loops
    std::vector<std::string> v;
    v.resize(10);
    // modify vector elements:
    for (std::string &s : v) {
        std::cin >> s;
    }
    // read-only access to vector elements:
    for (std::string const &s : v) {
        std::cout << s;
    }
    // modify:
    for (auto &s : v) {
        std::cin >> s;
    }
    // read-only access:
    for (auto const &s : v) {
        std::cout << s;
    }

    /**
     * Rvalues vs. Lvalues
     * * Lvalues = expressions of which we can get memory address
     * - refer to objects that persist in memory
     * - everything that has a name (variables, function parameters, …)
     * * Rvalues = expressions of which we cannot get memory address
     * - literals (123, "string literal", …)
     * - temporary results of operations
     * - temporary objects returned from functions
     */
    int a = 1;  // a and b are both lvalues
    int b = 2;  // 1 and 2 are both rvalues

    /**
     * Reference Binding Rules
     * * &	only binds to Lvalues
     * * const&	binds to const Lvalues and Rvalues
     */

    // Only valid if referenced object outlives the function!
    int i = 2;
    int j = increase(i, 4);  // OK, i and j are 6 now
    std::cout << "i: " << i << " j: " << j << newline;
    std::cout << "=============================" << newline;
    // What about an object returned from a function ?
    // std::vector<std::string> foo(int x){};
    // take it by value(recommended) :
    //  std::vector<std::string> v1 = foo();
    // auto v2 = foo();

    return 0;
}

void computeTax(double subTotal, double &tax, double &total, double taxRate) {
    tax = subTotal * taxRate;
    total = subTotal + tax;
}

// Function references:
static void MyFunction(int &y) {
    std::cout << "Function 1: " << y << newline;
    std::cout << "Function 2: " << y << newline;
}

auto incl_first_last(std::vector<int> x, std::vector<int> const &y) {
    if (y.empty()) return x;
    // append to local copy 'x'
    x.push_back(y.front());
    x.push_back(y.back());
    return x;
}
//  incl_first_last({1, 2, 4}, {6, 7, 8, 9});  // → { 1, 2, 4, 6, 9 }

// Only valid if referenced object outlives the function!
int &increase(int &x, int delta) {
    x += delta;
    return x;  // x references non-local int
}  // OK, reference still valid
