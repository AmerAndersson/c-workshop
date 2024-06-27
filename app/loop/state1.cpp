// Introduction to switch
// By Amer Andersson

#include <iostream>

using namespace std;

int main()
{
    /// For Loop
    for (int v = 0; v < 5; v++)
    {
        cout << v << "\n";
    }
    std::cout << "=============================" << std::endl;

    /// Outer loop
    for (int i = 1; i <= 2; ++i)
    {
        cout << "Outer: " << i << "\n"; /// Executes 2 times

        /// Inner loop
        for (int j = 1; j <= 3; ++j)
        {
            cout << " Inner: " << j << "\n"; /// Executes 6 times (2 * 3)
        }
    }
    std::cout << "=============================" << std::endl;

    /// For-each loop
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers)
    {
        cout << i << "\n";
    }
    std::cout << "=============================" << std::endl;
    /// Break: jumps out of the loop when i is equal to 4
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << "\n";
    }
    std::cout << "=============================" << std::endl;
    ///  Continue skips the value of 4:
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i << "\n";
    }
    return 0;
}