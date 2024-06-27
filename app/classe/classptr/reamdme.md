# Classes pointer

* Classes are an expanded concept of data structures: like data structures,
* they can contain data members, but they can also contain functions as members.
* An object is an instantiation of a class. In terms of variables, a class would be the type,
* and an object would be the variable.
* * private members:
* are accessible only from within other members of the same class (or from their "friends").
* * protected members:
* are accessible from other members of the same class (or from their "friends"),
* but also from members of their derived classes.
* * public members:
* are accessible from anywhere where the object is visible
* By default, all members of a class declared with the class keyword have private access for all its members

* Classes allow programming using object-oriented paradigms:
* Data and functions are both members of the object, reducing the need to pass and carry handlers
* or other state variables as arguments to functions, because they are part of the object whose member is called.
* Notice that no arguments were passed on the calls to rectA.area or rectB.area.
* Those member functions directly used the data members of their respective objects rectA and rectB.
*
* In order to avoid that, a class can include a special function called its constructor, which is automatically
* called whenever a new object of this class is created, allowing the class to initialize member variables or allocate storage
* This constructor, with a name that matches the class name and without any return type; not even void.
* The constructors are only executed once, when a new object of that class is created.

## expression can be read as

  *x pointed to by x
  &x address of x
  x.y member y of object x
  x->y member y of object pointed to by x
  (*x).y member y of object pointed to by x (equivalent to the previous one)
  x[0] first object pointed to by x
  x[1] second object pointed to by x
  x[n] (n+1)th object pointed to by x

## Classes defined with struct and union

Classes can be defined not only with keyword class, but also with keywords struct and union.
The keyword struct, generally used to declare plain data structures, can also be used to
declare classes that have member functions, with the same syntax as with keyword class.
The only difference between both is that members of classes declared with the keyword struct have public access by default,
while members of classes declared with the keyword class have private access by default.
For all other purposes both keywords are equivalent in this context.
Conversely, the concept of unions is different from that of classes declared with struct and class,
since unions only store one data member at a time, but nevertheless they are also classes and can thus also hold member functions.
The default access in union classes is public.
