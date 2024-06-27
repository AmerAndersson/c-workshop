#include <iostream>
#include "source.h"

/// Getter speed method
int Vehicle::speed(int maxSpeed)
{
    return maxSpeed;
}

/// Setter salary
void Employee::setSalary(int s)
{
    salary = s;
}
/// Getter salary
int Employee::getSalary()
{
    return salary;
}
/// Setter salary
void Programmer::setSalary(int s)
{
    salary = s;
}
/// Getter salary
int Programmer::getSalary()
{
    return salary;
}

/// ========================
/// Multilevel Inheritance
/// ========================
// Base class (parent)

void Parent::hello()
{
    std::cout << "Hello there chid.\n";
}
void Child::sayHi()
{
    std::cout << "Hello paretn from child.\n";
}
void GrandChild::welcome()
{
    std::cout << "Welcome all chilren and how are you?\n";
}

/// A class can also be derived
/// from more than one base class
/// Base class (parent)

void MyClass::myFunction()
{
    std::cout << "Some content in parent class.\n";
}

void MyOtherClass::myOtherFunction()
{
    std::cout << "Some content in another class.\n";
}

/**
 * * Polymorphism
 * Polymorphism means "many forms", and it occurs when
 * we have many classes that are related to each other by inheritance.
 * Polymorphism uses those methods to perform different tasks.
 * This allows us to perform a single action in different ways.
 */

void Animal::animalSound()
{
    std::cout << "The animal makes a sound \n";
}
void Cat::animalSound()
{
    std::cout << "The cat says: wow wow \n";
}
void Dog::animalSound()
{
    std::cout << "The dog says: bow wow \n";
}
