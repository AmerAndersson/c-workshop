#include <iostream>
#include <string>

const char newline = '\n';
/**
 * @brief  Namespaces allow us to group named entities that otherwise
 * would have global scope into narrower scopes, giving them namespace scope.
 * This allows organizing the elements of programs into different logical scopes referred to by names.
 * Where myNamespace is any valid myNamespace and named_entities is the set of variables,
 * types and functions that are included within the namespace.
 * Namespaces are particularly useful to avoid name collisions.
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */

namespace foo {
int value() { return 5; }
}  // namespace foo

namespace bar {
const double pi = 3.1416;
double value() { return 2 * pi; }
}  // namespace bar

/// This declares three variables: a and c are in namespace foo, while b is in namespace bar.
/// Namespaces can even extend across different translation units (i.e., across different files of source code).
namespace foo {
int a;
}
namespace bar {
int b;
}
namespace foo {
int c;
}

/// The keyword "using" introduces a name into
/// the current declarative region (such as a block),
/// thus avoiding the need to qualify the name.
namespace first {
int x = 5;
int ys = 10;
}  // namespace first

namespace second {
double x = 3.1416;
double y = 2.7183;
}  // namespace second

namespace first {
int x1 = 5;
}  // namespace first

namespace second {
double x2 = 3.1416;

}  // namespace second
int main() {
    // qualified as foo::value(),bar::value() and bar::pi
    std::cout << foo::value() << newline;
    std::cout << bar::value() << newline;
    std::cout << bar::pi << newline;
    std::cout << "-------" << newline;

    // without any name qualifier
    // refers to first::x, whereas y refers to second::y,
    // just as specified by the "using" declarations

    // qualified as first::x and second::y
    using first::x;
    using second::y;
    std::cout << x << newline;
    std::cout << y << newline;
    std::cout << first::ys << newline;
    std::cout << second::x << newline;
    std::cout << "-------" << newline;

    // The keyword using can also be used as
    // a directive to introduce an entire namespace
    using namespace first;
    std::cout << x << newline;
    std::cout << ys << newline;
    using namespace second;
    std::cout << second::x << newline;
    std::cout << second::y << newline;
    std::cout << "-------" << newline;

    // using and using namespace have validity only in the same block in which
    // they are stated or in the entire source code file if they are used directly in the global scope.
    // For example, it would be possible to first use the objects of one namespace and then those of another
    // one by splitting the code in different blocks:
    {
        using namespace first;
        std::cout << x1 << newline;
    }

    {
        using namespace second;
        std::cout << x2 << newline;
    }
    // Namespace aliasing
    // Existing namespaces can be aliased with new names, with the following syntax:
    // namespace new_name = current_name;

    return 0;
}
