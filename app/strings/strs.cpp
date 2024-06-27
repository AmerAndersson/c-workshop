
#include <cctype>
#include <cstring>
#include <iostream>
#include <string>

/**
 * @brief  main program  string type use to store a sequence of characters
 * @author:  Amer Andersson
 * @conutry: Sweden
 * @date:    2024
 * @return 0 when program execution completes successfully.
 */

int main() {
    char myntcs[100] = "convert c-string to string";
    std::string mystring = myntcs;       // convert c-string to string
    std::cout << mystring << std::endl;  // printed as a library string
    std::cout << mystring.c_str();       // printed as a c-string
}
