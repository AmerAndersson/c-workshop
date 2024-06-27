#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int intnumberOfLanguages;
    cout << "Hello reader and Welcome to C++.\n";
    cout << "How many programming languages have you used? ";
    cin >> intnumberOfLanguages;
    if (intnumberOfLanguages < 1)
        cout << "Read the preface. You may prefer\n"
             << "a more elementary book by the same author.\n";
    else
        cout << "Enjoy the book.\n";

    cout << "-----------------------------" << endl;

    const double RATE = 6.9;
    double deposit;
    cout << "Enter the amount of your deposit $";
    cin >> deposit;
    double newBalance;
    newBalance = deposit + deposit * (RATE / 100);

    cout << "In one year, that deposit will grow to\n"
         << "$" << newBalance << " an amount worth waiting for.\n";

    return 0;
}
