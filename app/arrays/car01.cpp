// Introduction to User Input
// By Amer Andersson

#include <iostream>
#include <string>
using namespace std;

int main()
{

    /// Access the Elements of an Array.
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0] << endl;
    cout << "==============" << endl;

    /// Change an Array Element
    cars[0] = "Opel";
    cout << cars[0] << endl;
    cout << "==============" << endl;
    /// Loop Through an Array
    string myCars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++)
    {
        cout << myCars[i] << "\n";
    }
    cout << "==============" << endl;

    /// outputs the index of each element together with its value
    for (int i = 0; i < 5; i++)
    {
        cout << i << " = " << myCars[i] << "\n";
    }
    cout << "==============" << endl;

    /// shows how to loop through an array of integers
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << "\n";
    }
    cout << "==============" << endl;

    /// The foreach Loop
    for (int i : myNumbers)
    {
        cout << i << "\n";
    }
    return 0;
}