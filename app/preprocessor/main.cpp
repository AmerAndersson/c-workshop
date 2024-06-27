
#include <iostream>

/**
 * Preprocessor directives
 * Preprocessor directives are lines included in the code of programs preceded by a hash sign (#).
 * These lines are not program statements but directives for the preprocessor.
 * The preprocessor examines the code before actual compilation of code begins and resolves all these directives
 * before any code is actually generated by regular statements.
 * These preprocessor directives extend only across a single line of code.
 * As soon as a newline character is found, the preprocessor directive is ends.
 * No semicolon (;) is expected at the end of a preprocessor directive.
 * * macro definitions (#define, #undef)
 * * #define identifier replacement
 */
#define getmax(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 5, y;
    y = getmax(x, 2);
    std::cout << y << std::endl;
    std::cout << getmax(7, x) << std::endl;

    /// standard macro names
    std::cout << "This is the line number " << __LINE__;
    std::cout << " of file " << __FILE__ << ".\n";
    std::cout << "Its compilation began " << __DATE__;
    std::cout << " at " << __TIME__ << ".\n";
    std::cout << "The compiler gives a __cplusplus value of " << __cplusplus << '\n';
    std::cout << "Hosted implementation " << __STDC_HOSTED__;

    return 0;
}