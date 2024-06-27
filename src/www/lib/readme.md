# source code

1. clang++ -E  main.cpp >  main.i
2. clang++ -S  main.i
3. clang++ -c  main.i
4. clang++  main.o -o main
5. c++ -std=c++23  -c tools.cpp  -o  tools.o  
6. nm -gC main.o
7. ar rcs libtools.a tools.o
8. c++ -std=c++23 main.cpp -L .  -ltools  -o main

preprocessor: -> main.i
compiler: -> main.s
assembler: -> object file main.o
linker: -> main
executable:

## enable all warnings, treats them as errors

g++ main.cpp -o main -Wall -Wextra -Werror

## debugging

-g


[ 25%] Building CXX object CMakeFiles/tools.dir/tools.cpp.o
[ 50%] Linking CXX static library libtools.a
[ 50%] Built target tools
[ 75%] Building CXX object CMakeFiles/main.dir/main.cpp.o
[100%] Linking CXX executable main
[100%] Built target main

make clean
rm -fr *
rm -rf build/
mkdir -p build && cd build &6 cd make ..
