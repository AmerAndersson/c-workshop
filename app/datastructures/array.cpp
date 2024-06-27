// array of structures
#include <iostream>
#include <sstream>
#include <string>

/**
 * Because structures are types, they can also be used
 * as the type of arrays to construct tables or databases of them:
 */
struct Movies {
    std::string title;
    int year;
} films[3];

void printmovie(Movies movie);

int main() {
    // Array of structures
    std::string mystr;
    int n;

    for (n = 0; n < 3; n++) {
        std::cout << "Enter title: ";
        getline(std::cin, films[n].title);
        std::cout << "Enter year: ";
        getline(std::cin, mystr);
        std::stringstream(mystr) >> films[n].year;
    }

    std::cout << "\nYour favorite movie is:\n";
    for (n = 0; n < 3; n++)
        printmovie(films[n]);
    return 0;
}

void printmovie(Movies movie) {
    std::cout << movie.title;
    std::cout << " (" << movie.year << ")\n";
}

/*
Enter title: Blade Runner
Enter year: 1982
Enter title: The Matrix
Enter year: 1999
Enter title: Taxi Driver
Enter year: 1976
*/