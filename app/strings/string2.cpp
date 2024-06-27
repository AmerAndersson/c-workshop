
#include <cctype>
#include <cstring>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        std::cout << "Arg: " << argv[i] << "\n";
    }

    char name[10] = "Jane";
    for (int i = 0; i < 10; i++) {
        std::cout << name[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "l: " << strlen(name) << "\n";
    std::cout << "isup: " << isupper(name[0]) << "\n";

    std::cout << "low: " << islower(name[0]) << "\n";
    std::cout << "low: " << islower(name[1]) << "\n";

    name[4] = 't';
    name[5] = 0;  // some as '\0'
    std::cout << "Name: " << name << std::endl;

    std::cout << "Is equal: " << (name == "Janet") << std::endl;

    std::string name2 = "Jane";
    std::cout << "L: " << name2.length() << "\n";
    std::cout << "S: " << name2.size() << "\n";
    std::cout << (name2 == "Jane") << std::endl;
    std::cout << (name2 == name) << std::endl;

    return 0;
}