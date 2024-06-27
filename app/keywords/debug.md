// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
// 1. Use the Solution Explorer window to add/manage files
// 2. Use the Team Explorer window to connect to source control
// 3. Use the Output window to see build output and other messages
// 4. Use the Error List window to view errors
// 5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
// 6. In the future, to open this project again, go to File > Open > Project and select the .sln file

One of the better ways of getting an int from user :-

```c++
#include<iostream>
#include<sstream>

int main(){
    std::stringstream ss;

    ss.clear();
    ss.str("");

    std::string input = "";

    int n;

    while (true){
        if (!getline(cin, input))
            return -1;

        ss.str(input);

        if (ss >> n)
            break;

        std::cout << "Invalid number, please try again" << std::endl;

        ss.clear();
        ss.str("");
        input.clear();
}
```
