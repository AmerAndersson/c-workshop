// About structures
#include <iostream>
#include <sstream>
#include <string>

/**
 * A data structure is a group of data elements grouped together under one name.
 * These data elements, known as members, can have different types and different lengths.
 * Data structures can be declared in C++ using the following syntax:
 *
 * The example shows how the members of an object act just as regular variables.
 * For example, the member yours.year is a valid variable of type int, and mine.title is a valid variable of type string.
 * But the objects mine and yours are also variables with a type (of type movies).
 *
 * For example, both have been passed to function printmovie just as if they were simple variables.
 * Therefore, one of the features of data structures is the ability to refer to both their members individually
 * or to the entire structure as a whole. In both cases using the same identifier: the name of the structure.
 *
 */
// Data structure Moves
struct Movies {
    std::string title;
    int year;
} mine, yours;

// Print movie's (title & year):
void printmovie(Movies movie);

int main() {
    std::string mystr;
    // initialized
    mine.title = "2001 A Space Odyssey";
    mine.year = 1968;

    std::cout << "Enter Title: ";
    getline(std::cin, yours.title);
    std::cout << "Enter Year: ";
    getline(std::cin, mystr);
    std::stringstream(mystr) >> yours.year;

    std::cout << "My favorite movie is:\n";
    printmovie(mine);
    std::cout << "And yours is:\n";
    printmovie(yours);

    return 0;
}

// Print movie's (title & year):
void printmovie(Movies movie) {
    std::cout << movie.title;
    std::cout << " (" << movie.year << ")\n";
}