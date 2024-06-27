// pointers to structures
#include <iostream>
#include <sstream>
#include <string>

/*
pointers to structures
-------------------
struct Movies {
  string title;
  int year;
};
* Movies movie;
* Movies * pmovie;
Here movie is an object of structure type Movies,
and pmovie is a pointer to point to objects of structure type Movies.
Therefore, the following code would also be valid:
* pmovie = &amovie;
The value of the pointer pmovie would be assigned the address of object movie
The arrow operator (->) is a dereference operator that is used exclusively with pointers to objects that have members.
This operator serves to access the member of an object directly from its address.
* pmovie-> , for all purposes, equivalent to:  (*pmovie).
Both expressions, pmovie->title and (*pmovie).title are valid, and both access the member title of the data structure pointed
by a pointer called pmovie. It is definitely something different than
*pmovie. , which is rather equivalent to: *(pmovie.title)
*/
struct Movies {
    std::string title;
    int year;
};

int main() {
    // mixes pointers and structures,
    // and will serve to introduce a new operator: the arrow operator (->):
    std::string mystr;

    Movies movie;
    Movies* pmovie;
    pmovie = &movie;

    std::cout << "Enter title: ";
    getline(std::cin, pmovie->title);
    std::cout << "Enter year: ";
    getline(std::cin, mystr);
    std::stringstream(mystr) >> pmovie->year;

    std::cout << "\nYour favorite movie is:\n";
    std::cout << pmovie->title;
    std::cout << " (" << pmovie->year << ")\n";

    return 0;
}