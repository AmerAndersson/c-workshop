#include <iostream>

/**
 * @brief template <template-parameters> function-declaration
 * he template parameters are a series of parameters separated by commas.
 * hese parameters can be generic template types by specifying either the
 * lass or typename keyword followed by an identifier. This identifier can
 * then be used in the function declaration as if it was a regular type.
 * For example, a generic sum function could be defined a
 * It makes no difference whether the generic type is specified with keyword
 * class or keyword typename in the template argument list (they are 100% synonyms in template declarations).
 * @return
 */

/// function template add two number
template <class T>
T sum(T a, T b);
/// function templates test if x ==y
template <class T, class U>
bool areEqual(T x, U y);

int main()
{
    /// call function templates
    int i = 5, j = 6, k;
    double f = 2.0, g = 0.5, h;
    k = sum<int>(i, j);
    h = sum<double>(f, g);
    std::cout << k << "\n";
    std::cout << h << "\n";
    std::cout << "-------" << std::endl;

    /// call function templates
    if (areEqual<int, double>(10, 10.0L))
    {
        std::cout << "x and y are equal\n";
    }
    else
    {
        std::cout << "x and y are not equal\n";
    }

    return 0;
}
/// function template add two number
template <class T>
T sum(T a, T b)
{
    T result;
    result = a + b;
    return result;
}
/// function templates test if x ==y
template <class T, class U>
bool areEqual(T x, U y)
{
    return (x == y);
}