# C++ Primer Errata

```cpp
Last modified 9 October 2012
Every book has bugs in it, and C++ Primer is no exception. This page presents all the bugs that have come to our attention. All of these errors will be corrected in the Second printing, October 2012. Many thanks to the careful readers who notified us of these problems!

Technical errors corrected in the second printing
Page 475: The begin and end members of class StrBlob should be defined outside the class body. They can't be defined until class StrBlobPtr is complete.
Page 522: The remove_from_Folders member correctly removes pointers to itself from each of its corresponding Folders, but it should clear its own folders member as well.
Pages 525–528: The alloc member of StrVec should be a static member of the class, not a data member of each object. To fix this error, add the static keyword to the declaration of alloc inside the StrVec class and provide a definition of the form
allocator<string> StrVec::alloc;
inside the implementation file for StrVec.
Page 567: In the StrBlobPtr::operator--() function, the call to check should pass curr as the first argument, not -1.
Page 762: The EOF preprocessor variable is defined in the cstdio header not iostream.
Clarifications and improvements made in the second printing
Page 175: The scores vector should be defined as const because we do not want the elements in scores to be changed.
Pages 576–578: The div class reuses the name of a C library function. C++ compilers are permitted to put C library names into the global namespace. To avoid potential conflicts rename this class divide.
Page 780: Drop "are equivalent" from the last sentence of the highlighted box titled Backward Compatibility: Exception Specifications. These declarations both say that recoup won't throw, but there are subtle distinctions between what the compiler is permitted to do with these declarations.
Typographical errors corrected in the second printing
Pages xxvi and 22 the correct web address for the book code is <http://www.informit.com/title/0321714113>

Page 155: The explanation of why we use an unsigned long rather than an int should say that we need "at least 27" bits, not that we need "at least 17" bits.
Page 158: The last sentence before the exercises for 4.10 should say that we "reset the current element" not the "next element".
Page 177: The second comment in the first two code examples should include 7 as a grade that will get a minus.
Page 225: In the third sentence before the Tip box, should read "string named ret" not "string named s".
Page 229: The type alias declaration in the code example at the top of the page should define arrT not arrtT and the last comment in that example should say that "func returns a pointer to an array of ten ints" not five ints.
Page 236: Last sentence before the last code example should be "For example, to override the default for backgrnd, we must also supply arguments for ht and wid:"
Page 243: Replace "parameter" at the end of the last bullet by "argument in the call".
Changes in exercises made in the second printing
Page 59: Exercise 2.25 (a) should be int* ip, i, &r = i;
Page 228: Exercise 6.35 replace "fact" by "factorial".
Page 250: Exercise 6.55 change "values" to "functions".
```

<https://www.informit.com/store/c-plus-plus-primer-9780321714114>
<http://www.informit.com/title/032174113>
