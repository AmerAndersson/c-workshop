
# rvalues & lvalue

Rvalues correspond to temporary objects returned from functions,
while lvalues correspond to objects you can refer to, either by name or
by following a pointer or lvalue reference.

A useful heuristic to determine whether an expression is an lvalue is to ask if you can
take its address. If you can, it typically is. If you can’t, it’s usually an rvalue. A nice
feature of this heuristic is that it helps you remember that the type of an expression is
independent of whether the expression is an lvalue or an rvalue. That is, given a type
T, you can have lvalues of type T as well as rvalues of type T. It’s especially important
to remember this when dealing with a parameter of rvalue reference type, because the
parameter itself is an lvalue:

```cpp
KEY CONCEPT: TYPES
Types are one of the most fundamental concepts in programming and a concept that
we will come back to over and over in this Primer. A type defines both the contents of
a data element and the operations that are possible on those data.
The data our programs manipulate are stored in variables and every variable has a
type. When the type of a variable named v is T, we often say that “v has type T” or,
interchangeably, that “v is a T.

Most of the examples in this book use the iostream library. Fundamental to
the iostream library are two types named istream and ostream, which represent input and output streams, respectively. A stream is a sequence of characters
read from or written to an IO device. The term stream is intended to suggest that
the characters are generated, or consumed, sequentially over time.

```

## echo command

The value returned from main is accessed in a system-dependent manner. On
both UNIX and Windows systems, after executing the program, you must issue an
appropriate

```shell
On UNIX systems, we obtain the status by writing
$ echo $?
To see the status on a Windows system, we write
$ echo %ERRORLEVEL%
```

g++ -std=c++0x prog1.cpp -o prog1

sudo snap install codechecker --classic
sudo apt-get install cppcheck
