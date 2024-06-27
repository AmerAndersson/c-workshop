// strings and NTCS:
#include <iostream>
#include <string>

/** std::string
 * dynamic array of char (similar to vector<char>)
 * concatenation with + or +=
 * single character access with [index]
 * modifiable ("mutable")
 * regular: deeply copyable, deeply comparable
 *
 * one char can hold a single character
 * smallest integer type (usually 1 byte)
 * char literals must be enclosed in single quotes: 'a', 'b', 'c', …
 */
int main() {
    /// Character sequences
    /*
    char question1[] = "What is your name? ";
    std::string question2 = "Where do you live? ";
    char answer1[80];
    std::string answer2;
    std::cout << question1;
    std::cin >> answer1;
    std::cout << question2;
    std::cin >> answer2;
    std::cout << "Hello, " << answer1;
    std::cout << " from " << answer2 << "!\n";
    */
    std::string hw = "Hello";
    hw += " World!";
    std::string ss = hw;         // copy of hw
    std::cout << hw << '\n';     // Hello World!
    std::cout << hw[4] << '\n';  // o
    std::cout << ss << '\n';     // Hello World!

    // char = std::string's Element Type
    char c1 = 'A';
    char c2 = 65;             // ASCII code of 'A'
    std::cout << c1 << '\n';  // A
    std::cout << c2 << '\n';  // A

    std::cout << (c1 == c2) << '\n';  // 1
    std::string s = "xyz";
    s[1] = c1;
    std::cout << s << '\n';  // xAz
    s += c2;
    std::cout << s << '\n';  // xAzA

    // std::string Manipulation
    std::string me = "I am sorry, Dave.";
    std::cout << me.insert(5, "very ") << '\n';
    std::cout << me.erase(6, 2) << '\n';
    std::cout << me.replace(12, 5, "Frank") << '\n';
    /*
    message.resize(4);
    std::cout << message << '\n';
    message.resize(20, '?');
    std::cout << message << '\n'; */

    //"std::string Literal"s  C++14
    using namespace std::string_literals;
    auto s1 = "seven of"s;         // type of s1 is std::string
    auto s2 = s1;                  // s2 is a copy of s1
    s1 += " nine";                 //
    std::cout << s1 << '\n';       // seven of nine
    std::cout << s2 << '\n';       // seven of
    auto s3 = "uni"s + "matrix"s;  //
    std::cout << s3 << '\n';       // unimatrix

    // Raw String Literals
    // Advantage : special characters can be used without escaping

    R"(raw "C"-string c:\users\joe)";     // char const[] C++ 11
    R"(raw "std"-string c:\users\moe)"s;  // std::string C++ 14
    return 0;
}