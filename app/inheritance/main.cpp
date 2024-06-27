#include <iostream>

/**
 * Inheritance between classes
 * Classes in C++ can be extended, creating new classes which retain characteristics of the base class.
 * This process, known as inheritance, involves (a base class and a derived class):
 * The derived class inherits the members of the base class, on top of which it can add its own members
 * The Polygon class would contain members that are common for both types of polygon. In our case: width and height.
 * And Rectangle and Triangle would be its derived classes, with specific features that are different from one type of polygon to the other.
 * Classes that are derived from others inherit all the accessible members of the base class. That means that if a base class includes
 * a member A and we derive a class from it with another member called B, the derived class will contain both member A and member B.
 * The inheritance relationship of two classes is declared in the derived class.
 * * class derived_class_name: public base_class_name
 * Where derived_class_name is the name of the derived class and base_class_name is the name of the class on which it is based.
 * The public access specifier may be replaced by any one of the other access specifiers (protected or private).
 * This access specifier limits the most accessible level for the members inherited from the base class:
 * The members with a more accessible level are inherited with this level instead,
 * while the members with an equal or more restrictive access level keep their restrictive level in the derived class.
 * The objects of the classes Rectangle and Triangle each contain members inherited from Polygon. These are: width, height and set_values.
 * The protected access specifier used in class Polygon is similar to private.
 * Its only difference occurs in fact with inheritance: When a class inherits another one,
 * the members of the derived class can access the protected members inherited from the base class,
 * but not its private members.
 * By declaring width and height as protected instead of private, these members are also accessible from the derived classes Rectangle and Triangle,
 * instead of just from members of Polygon. If they were public, they could be accessed just from anywhere.
 * We can summarize the different access types according to which functions can access them in the following way.
 * ---------------------------------------------------------
 * | Access	                 | public | protected | private |
 * |-------------------------|--------|---------- |---------|
 * |members of the same class| yes	  | yes	      | yes     |
 * |members of derived class | yes	  | yes	      | no      |
 * |not members	             | yes	  | no	      | no      |
 * ---------------------------------------------------------
 * Where "not members" represents any access from outside the class, such as from main, from another class or from a function.
 * the members inherited by Rectangle and Triangle have the same access permissions as they had in their base class Polygon:
 * --------------------------------------------
 * Polygon::width           // protected access
 * Rectangle::width         // protected access
 * Polygon::set_values()    // public access
 * Rectangle::set_values()  // public access
 * -------------------------------------------
 * With protected, all public members of the base class are inherited as protected in the derived class. Conversely,
 * if the most restricting access level is specified (private), all the base class members are inherited as private.
 * For example, if daughter were a class derived from mother that we defined as:
 * * class Daughter: protected Mother;
 * This would set protected as the less restrictive access level for the members of Daughter that it inherited from mother.
 * That is, all members that were public in Mother would become protected in Daughter.
 * Of course, this would not restrict Daughter from declaring its own public members.
 * That less restrictive access level is only set for the members inherited from Mother.
 * If no access level is specified for the inheritance, the compiler assumes private for classes declared with keyword class,
 * and public for those declared with struct.
 * Actually, most use cases of inheritance in C++ should use public inheritance. When other access levels are needed for base classes,
 * they can usually be better represented as member variables instead.
 * ----------------------------------------------
 * * What is inherited from the base class?
 * In principle, a publicly derived class inherits access to every member of a base class except:
 * * its constructors and its destructor
 * * its assignment operator members (operator=)
 * * its friends
 * * its private members
 * ----------------------------------------------
 **/

// Base class
class Polygon {
   protected:
    int width, height;

   public:
    // Setter
    void set_values(int a, int b) { width = a, height = b; }
};

// The inheritance relation has been declared
// using the public keyword on each of the derived classes
class Rectangle : public Polygon {
   public:
    int area() { return width * height; }
};

// The inheritance relation has been declared
// using the public keyword on each of the derived classes
class Triangle : public Polygon {
   public:
    int area() { return width * height / 2; }
};


/**
 * *What is inherited from the base class?
 In principle, a publicly derived class inherits access to every member of a base class except:
 * ----------------------------------------------
 * * its constructors and its destructor
 * * its assignment operator members (operator=)
 * * its friends
 * * its private members
 * ----------------------------------------------
* Even though access to the constructors and destructor of the base class is not inherited as such,
* they are automatically called by the constructors and destructor of the derived class.
* Unless otherwise specified, the constructors of a derived class calls the default constructor of its base classes
* (i.e., the constructor taking no arguments). Calling a different constructor of a base class is possible,
* using the same syntax used to initialize member variables in the initialization list:
* * derived_constructor_name (parameters) : base_constructor_name (parameters) {...}
*
* Notice the difference between which Mother's constructor is called when a new Daughter object is created
* and which when it is a Son object. The difference is due to the different constructor declarations of Daughter and Son:
* ----------------------------------------------------------------------------------
* Daughter (int a)          // nothing specified: call default constructor
* Son (int a) : Mother (a)  // constructor specified: call this specific constructor
* -----------------------------------------------------------------------------------
*/

// Base class constructor
class Mother {
   public:
    Mother() { std::cout << "Mother: no parameters\n"; }
    Mother(int a) { std::cout << "Mother: int parameter\n"; }
};
// Derived class constructor
class Daughter : public Mother {
   public:
    Daughter(int a) { std::cout << "Daughter: int parameter\n\n"; }
};
// Derived class constructor
class Son : public Mother {
   public:
    Son(int a) : Mother(a) { std::cout << "Son: int parameter\n\n"; }
};
int main() {
    Rectangle rect;
    Triangle trgl;
    rect.set_values(4, 5);
    trgl.set_values(4, 5);
    std::cout << "Rect'area: " << rect.area() << '\n';
    std::cout << "Trig'area: " << trgl.area() << '\n';
    std::cout << "------------- " << std::endl;

    Daughter kelly(0);
    Son bud(0);
    return 0;
}
