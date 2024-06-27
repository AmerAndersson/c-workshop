#include <atomic>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <thread>

const char newline = '\n';
/**
 * @brief  main program for Object-oriented programming (OOP)
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */

int main() {
    //std::atomic_flag flag1 = true;
    std::atomic_flag flag2 = ATOMIC_FLAG_INIT;

    // set the value to true  and return previous value
    std::cout << "1: Previous flag1 value : " << flag2.test_and_set() << newline;
    std::cout << "2: Previous flag1 value : " << flag2.test_and_set() << newline;

    // clear the flag2
    flag2.clear();
    std::cout << "3: Previous flag1 value : " << flag2.test_and_set() << newline;

    return 0;
}