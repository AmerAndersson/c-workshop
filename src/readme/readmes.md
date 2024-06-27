
# We are in a golden age of C++ tooling, many of them are even free

add CI
setup tests (use something like approval tests if starting with existing code)
enable as many warnings as possible
turn on warnings as errors
add 2 (or more) compilers
enable more warnings
enable more warnings
use an IDE with real-time feedback of errors and analysis
(You might have to enable one at a time if you are starting on an existing code base)
add static analysis tools
enable runtime analysis
enable fuzzing

## We are in a golden age of C++ tools

If you are developing blindly, without any tool guidance, you are doing C++ wrong. Think of these tools like a backup camera in your car. Certainly you can back up without a camera, but having one gives you a second set of eyes, deeper into the action than is possible with your human eyes.

You need:

Continuous build environment

github
gitlab
jenkins
<what's your favorite, did I leave it out?>
As many compilers as you can

GCC
Clang
cl (visual studio)
clang-cl (clang's msvc compatibility)
An organized testing framework

doctest
catch
gtest
boosttest
<what's your favorite, did I leave it out?>
test coverage analysis, reporting and tracking (you need to know if your test rate is decreasing!)

coveralls
codecov
<what else am I missing here?>
As much static analysis as you can (most are free or have free options)

at least -Wall -Wextra -Wshadow -Wconversion -Wpedantic -Werror and -W4 on Windows
gcc -fanalyzer - <https://gcc.gnu.org/onlinedocs/gcc/Static-Analyzer-Options.html>
cl.exe /analyze
cppcheck
clang-tidy
pvs studio <https://pvs-studio.com/en/>
sonar's tools
<countless many options, I expect many of you to tell me that I'm missing old school c tools, but many of those don't work with C++>
Runtime analysis during testing

address sanitizer (<https://clang.llvm.org/docs/index.html>)
undefined behavior sanitizer
thread sanitizer
valgrind (if you can tolerate it)
debug checked iterators <https://gcc.gnu.org/onlinedocs/libstdc++/manual/debug_mode_using.html#debug_mode.using.mode> <https://learn.microsoft.com/en-us/cpp/standard-library/checked-iterators?view=msvc-170>
drmemory
Fuzz Testing

More on this coming, but every library should be fuzz tested
It generates novel / unique inputs for your library in an attempt to generate 100% code coverage
Should be used in conjunction with runtime analysis, to hard-catch any bug
Ship with hardening enabled

Control Flow Guard - <https://learn.microsoft.com/en-us/cpp/build/reference/guard-enable-control-flow-guard?view=msvc-170>
_FORITFY_SOURCE - <https://developers.redhat.com/articles/2022/09/17/gccs-new-fortification-level>
Stack Protector - <https://gcc.gnu.org/onlinedocs/gcc/Instrumentation-Options.html>
UBSan "Minimal runtime" mode - <https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html#minimal-runtime>
See more info about tools and specific compiler options and flags here: <https://github.com/cpp-best-practices/cppbestpractices/blob/master/02-Use_the_Tools_Available.md>

Using an IDE or plugin for your IDE can help integrate many of these things as well.
