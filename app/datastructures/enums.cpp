#include <iostream>
#include <sstream>
#include <string>

/**
 * Values of enumerated types declared with enum are implicitly convertible to an integer type.
 * In fact, the elements of such an enum are always assigned an integer numerical equivalent internally,
 * to which they can be implicitly converted to. If it is not specified otherwise, the integer value equivalent
 * to the first possible value is 0, the equivalent to the second is 1, to the third is 2, and so on...
 * Therefore, in the data type colors: defined above, black would be equivalent to 0, blue would be equivalent to 1,
 * green to 2, and so on.
 *
 * -----------------------------------------------
 */

// Enumerated types declared with enum class also have more control over their underlying type;
// it may be any integral data type, such as char, short or unsigned int, which essentially serves
// to determine the size of the type. This is specified by a colon and the underlying type following the enumerated type.
// Eyecolor is a distinct type with the same size of a char (1 byte).
enum class EyeColor : char {
    blue,
    green,
    brown
};

//  Enumerators types with enum class
enum class Colors : int {
    black = 0,
    blue,
    green,
    cyan,
    red,
    purple,
    yellow,
    white
};
// Enumerators types with enum struct
enum struct Months : int {
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
} years;

// Scoped Enumerations
enum class Day : char {
    mon,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
};
// date as member of person
enum class month {
    jan = 1,
    feb = 2,
    mars = 3,
    apr = 4,
    may = 5,
    jun = 6,
    jul = 7,
    aug = 8,
    sep = 9,
    oct = 10,
    nov = 11,
    dec = 12
};
struct date {
    int yyyy;
    month mm;
    int dd;
};

/**
 * Enumerations can be used as bitmasks.
 * The bitmask is a combination of the values of the enumerated type.
 */
struct person {
    std::string name;
    date bday;
};

/**
 * Copy Construction = create new object with same values as source
 * Copy Assignment = overwrite existing object's values with that of source
 */
struct point {
    int x;
    int y;
};
int main() {
    // Each of the enumerator values of an enum class type needs to be scoped into its type
    // (this is actually also possible with enum types, but it is only optional).
    Colors mycolor;
    mycolor = Colors::blue;
    if (mycolor == Colors::green) mycolor = Colors::red;

    Months mymonths;
    mymonths = Months::january;
    if (mymonths == Months::february) mymonths = Months::march;

    Day myday;
    myday = Day::mon;  //
    if (myday == Day::mon) myday = Day::fri;

    // date as member of person
    person jlp{"Jean-Luc Picard ", {2305, month::jul, 13}};
    std::cout << jlp.name;     // Jean-Luc Picard
    std::cout << jlp.bday.dd;  // 13
    date yesterday{2020, month::jun, 16};
    person rv = {"Ronald Villiers", yesterday};

    /**
     * Copy Construction = create new object with same values as source
     * Copy Assignment = overwrite existing object's values with that of source
     */
   
    point p1{1, 2};  // construction
    point p2 = p1;   // copy construction
    point p3(p1);    // copy construction
    point p4{p1};    // copy construction
    auto p5 = p1;    // copy construction
    auto p6(p1);     // copy construction
    auto p7{p1};     // copy construction
    p3 = p2;         // copy assignment
                     // (both p2 & p3 existed before)
    return 0;
}
