#include <cinttypes>
#include <cstdio>
#include <iostream>
#include <vector>
/**
 * * Type Aliases
 * @brief
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */

// two simple functions:
constexpr int cxf(int i) { return i * 2; }
int foo(int i) { return i * 2; }

int main() {
    // Type Deduction: useing, Prefer the more powerful
    using real = double;
    using ullim = std::numeric_limits<unsigned long>;
    using index_vector = std::vector<std::uint_least64_t>;

    /**
     * Type Deduction: auto
     * variable type deduced from right hand side of assignment
     * often more convenient, safer and future proof
     * also important for generic (type independent) programming
     */

    auto i = 2;                 // int
    auto u = 56u;               // unsigned int
    auto d = 2.023;             // double
    auto f = 4.01f;             // float
    auto l = -78787879797878l;  // long int
    auto x = 0 * i;             // x: int
    auto y = i + d;             // y: double
    auto z = f * d;             // z: double

    /**
     * * Constant Expressions: constexpr
     * must be computable at compile time
     * can be computed at runtime if not invoked in a constexpr context
     * all expressions inside a constexpr context must be constexpr themselves
     * constexpr functions may contain
     * C++11  nothing but one return statement
     * C++14  multiple statements
     */

    constexpr int i = 2;       // OK '2' is a literal
    constexpr int j = cxf(5);  // OK, cxf is constexpr
    constexpr int k = cxf(i);  // OK, cxf and i are constexpr

    int x = 0;       // not constexpr
    int l = cxf(x);  // OK, not a constexpr context
    // constexpr contexts:
    constexpr int m = cxf(x);  //
    constexpr int n = foo(5);  //
    return 0;
}