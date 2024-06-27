// Introduction to switch
// By Amer Andersson

#include <iostream>

using namespace std;

int main()
{
    // Switch Statements
    cout << "Enter number: ";
    int nrs;
    cin >> nrs;

    switch (nrs)
    {
    case 1:
        cout << "Case 1"
             << "\n";
        break;

    case 2:
        cout << "Case 2"
             << "\n";
        break;

    case 3:
        cout << "Case 3"
             << "\n";
        break;

    case 4:
        cout << "Case 4"
             << "\n";
        break;

    case 5:
        cout << "Case 5"
             << "\n";
        break;

    default:
        cout << "Looking forward to the Weekend"
             << "\n";
        break;
    }
    return 0;
}