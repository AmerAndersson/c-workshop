#include <iostream>
#include <string>

const char newline = '\n';
/**
 * @brief But there is another substantial difference between
 * variables with static storage and variables with automatic storage:
 * -Variables with static storage(such as global variables) that are not explicitly initialized are automatically initialized to zeroes.
 * - Variables with automatic storage(such as local variables) that are not explicitly initialized are left uninitialized, and thus have an undetermined value.
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */

// global variables
int x;
int main() {
    // static vs automatic storage
    // The actual output may vary, but only the value of x is guaranteed to be zero.
    // y can actually contain just about any value (including zero).
    int y;
    std::cout << x << '\n';
    std::cout << y << '\n';

    return 0;
}