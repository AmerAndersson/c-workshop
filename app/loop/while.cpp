// Introduction to switch
// By Amer Andersson

#include <iostream>

using namespace std;

int main()
{
    /// While-loop
    int i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
    }
    std::cout << "=============================" << std::endl;
    /// D-while loop
    int is = 0;
    do
    {
        cout << is << "\n";
        is++;
    } while (is < 5);
    std::cout << "=============================" << std::endl;

    /// For Loop
    for (int v = 0; v < 5; v++)
    {
        cout << v << "\n";
    }
    std::cout << "=============================" << std::endl;

    /// Break in While Loop jumps out of the loop when i is equal to 4
    int b = 0;
    while (b < 10)
    {
        cout << b << "\n";
        b++;
        if (b == 4)
        {
            break;
        }
    }
    std::cout << "=============================" << std::endl;

    /// Continue in While Loop skips the value of 4:
    int a = 0;
    while (a < 10)
    {
        if (a == 4)
        {
            a++;
            continue;
        }
        cout << a << "\n";
        a++;
    }
    return 0;
}