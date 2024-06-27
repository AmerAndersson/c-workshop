#include <iostream>
#include <map>
#include <print>
#include <set>
#include <string>
#include <utility>
#include <vector>
import std;
import std.compat;
/**
 * @brief  C++ feature 23
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */

int main() {
    // String format
    std::string name{"CppCon"};
    std::print("Hello {} 2024!\n", name);
    std::println("Hello {} 2024!", name);

    // String format
    std::vector strings{"Hello"s, "World!\t2024"s};
    std::println("{}", strings);
    std::println("{::}", strings);

    // format range vector
    std::vector<std::pair<int, int>> v{{1, 2}, {3, 4}};
    std::println("{}", v);

    std::vector<std::vector<int>> vv{{11, 22}, {33, 44, 55}};
    std::println("{}", vv);
    std::println("{:n}", vv);
    std::println("{:n:n}", vv);
    std::println("{:n:n*^4}", vv);

    // format range set
    std::set<std::pair<int, int>> s{{1, 2}, {3, 4}};
    std::println("{}", s);

    // format range set
    std::map<int, int> m{{1, 2}, {3, 4}};
    std::println("{}", m);
    return 0;
}
