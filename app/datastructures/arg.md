# Command Line Arguments


* space-separated strings behind program call
* used to send information to a program when it starts
* especially useful for automation/scripting
* $ ls
* $ rm *.txt
* $ find -name *.jpg
* $ g++ -o out xy.cpp

```c++
#include <iostream>
int main (int const argc, char const*const* argv) {
  for (int i = 0; i < argc; ++i) {
    std::cout << argv[i] << '\n';
  }
}
```

$ g++ -o exe main.cpp
$ ./exe 12 abc -z 3
./exe
12
abc
-z
3
---

compile program 'exe'
run 'exe' with arguments
argv[0]  program call itself
argv[1]  1st argument
argv[2]
argv[3]
argv[4]

- names argc and argv are only a convention
- each element of argv is a C-string: a C-array of char
- argv itself is a C-array of C-strings
- argv[0] contains the program call  (platform dependent)


## Conversion to std::string, int,

```c++
#include <iostream>
int main (int const argc, char const*const* argv) {
  if (argc < 3) {
    std::cerr << "Usage: " << argv[0] << " <word> <times>\\n";
    return EXIT_FAILURE;
  }
  auto word  = std::string(argv[1]);
  int  times = atoi(argv[2]);
  for (int i = 0; i < times; ++i) {
    std::cout << word << ' ';
  }
  std::cout << '\n';
}

## String → Number Conversion Functions
#include <cstdlib> (C-strings)
int    atoi  (char const*);
long   atoll (char const*);
double atof  (char const*);

#include <string> C++11
int    stoi (std::string const&);
long   stol (std::string const&);
float  stof (std::string const&);
double stod (std::string const&);
```
