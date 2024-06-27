#include <iostream>
#include <string>

const char newline = '\n';
int main() {
    /// Dynamic arrays
    int *scores = new int[4]{4, 10, 21, 7};
    for (int i = 0; i < 4; i++) {
        std::cout << scores[i] << std::endl;
    }
    std::cout << "------------------------------------------" << newline;

    int scores2[10]{20, 10, 5, 8, 9, 12, 49, 4, 3, 134};
    for (int i = 0; i < 10; i++) {
        std::cout << scores2[i] << newline;
    }

    int *ptr1, *ptr2;
    ptr1 = new int;
    *ptr1 = 5;
    ptr2 = ptr1;
    delete ptr2;
    std::cout << "Just delete ptr2:" << newline;
    delete ptr1;
    std::cout << "Just delete ptr1:" << newline;
    delete[] scores;
    std::cout << "Just delete scores:" << newline;

    return 0;
}
