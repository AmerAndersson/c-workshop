#include <iostream>

int main() {
    int x = 5;
    double d = 5;
    float f = 5;
    char c = 'A';
    short s = 5;
    int *ptr = nullptr;
    std::cout << sizeof(int*) << std::endl;
    std::cout << sizeof(double*) << std::endl;
    std::cout << sizeof(float*) << std::endl;
    std::cout << sizeof(char*) << std::endl;
    std::cout << sizeof(short*) << std::endl;
    return 0;
}