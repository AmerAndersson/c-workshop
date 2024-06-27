# cpp command

g++  -g -Werror -Wall --pedantic -o CVector CVector.cpp  && time valgrind ./CVector

-------------------------------------------------------------------------------------------------------
Expression  |        Operator                             | Member function       | Non-member function
            |                                             |                       |
------------|------------------------------------------------------------------------------------------
@a          + - *& ! ~ ++ --                              | A::operator@()        | operator@(A)
a@          ++ --                                         | A::operator@(int)     | operator@(A,int)
a@b         + -* / % ^ & | < > == != <= >= << >> && || ,  | A::operator@(B)       | operator@(A,B)
a@b         = += -= *= /= %= ^= &= |= <<= >>= []          | A::operator@(B)       | -
a(b,c...)    ()                                           | A::operator()(B,C...) | -
a->b         ->                                           | A::operator->()       | -
(TYPE) a    TYPE                                          | A::operator TYPE()    | -  
-------------------------------------------------------------------------------------------------------
