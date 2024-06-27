// Introduction to User Input
// By Amer Andersson

#include <iostream>
#include <string>
using namespace std;

int main()
{

    int x, y;
    int sum;

    cout << "Type a number: ";
    cin >> x; // Get user input from the keyboard
    cout << "Type another number: \n";
    cout << "----------------------\n";

    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum << endl;
    cout << "----------------------\n";

    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum << endl;

    //	Inserts a backslash character (\)
    std::cout << "Hello World!\\";
    std::cout << "I am learning C++\n";
    cout << "----------------------\n";

    //	Creates a horizontal tab
    cout << "Hello World!\t";
    cout << "I am learning C++\n.";
    cout << "----------------------\n";

    //	Inserts a double quote character
    cout << "They call him \"Johnny\"\n.";
    cout << "----------------------\n";

    return 0;
}