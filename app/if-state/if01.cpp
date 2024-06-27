// Introduction to Conditional
// By Amer Andersson

#include <iostream>

using namespace std;

int main()
{
    // Explicit type casting operator
    int i;
    float f = 3.14;
    i = (int)f;

    i = int(f);

    cout << i << endl;
    cout << i << endl;

    // The if Statement
    if (20 > 18)
    {
        cout << "20 is greater than 18\n";
    }

    // The if Statement
    int x = 20;
    int y = 18;
    if (x > y)
    {
        cout << "x is greater than y\n";
    }

    // The else Statement
    int time = 20;
    if (time < 18)
    {
        cout << "Good day.";
    }
    else
    {
        cout << "Good evening.\n";
    }

    // The else Statement
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge)
    {
        cout << "Old enough to vote!\n";
    }
    else
    {
        cout << "Not old enough to vote.\n";
    }

    // The else if Statement
    int times = 22;
    if (times < 10)
    {
        cout << "Good morning."
             << "\n";
    }
    else if (times < 20)
    {
        cout << "Good day."
             << "\n";
    }
    else
    {
        cout << "Good evening.\n";
    }

    // Short Hand If Else
    int tim = 20;
    string result = (tim < 18) ? "Good day." : "Good evening.";
    cout << result << "\n";
    return 0;
}