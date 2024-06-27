//
#include <iostream>
#include <sstream>
#include <string>

/**
 * @brief Structures can also be nested in such a way
 * that an element of a structure is itself another structure:
 * Using the arrow operator (->) is a dereference operator that is used
 * exclusively with pointers to objects that have members.
 * This operator serves to access the member of an object directly from its address.
 * @struct Nesting structures
 * @author Amer Andersson
 * @date 2024-03-07
 */

struct Movies {
    std::string title;
    int year;
};

struct Friends {
    std::string name;
    std::string email;
    Movies movie;
} charlie, maria;

int main() {
    /// Create an object of Charlie and Maria:
    Friends* cfriend = &charlie;
    Friends* mfriend = &maria;

    /// initialized
    cfriend->name = "Charlie Smith";
    cfriend->email = "charlie@gmail.com";
    cfriend->movie.title = "Taxi Driver";
    cfriend->movie.year = 1976;

    /// Print out
    std::cout << "Name & Email is: ";
    std::cout << cfriend->name << ", " << cfriend->email << "\n";
    std::cout << "Favorite movie is: ";
    std::cout << cfriend->movie.title << ", " << cfriend->movie.year << "\n";
    std::cout << "====================================" << std::endl;

    /// initialized
    mfriend->name = "Maria John";
    mfriend->email = "maria@gmail.com";
    mfriend->movie.title = "Blade Runner";
    mfriend->movie.year = 1982;

    /// Print out
    std::cout << "Name & Email is: ";
    std::cout << mfriend->name << ", " << mfriend->email << "\n";
    std::cout << "Favorite movie is: ";
    std::cout << mfriend->movie.title << ", " << mfriend->movie.year << "\n";

    /**
     * After the previous declarations, all of the following expressions would be valid:
     * charlie.name
     * maria.favorite_movie.title
     * charlie.favorite_movie.year
     * pfriends->favorite_movie.
     */

    return 0;
}