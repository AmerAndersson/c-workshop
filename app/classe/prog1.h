#pragma once
#include <string>
/// class car protoyp:
/**
 *  * Inheritance
 * It is useful for code reusability: reuse attributes and
 * methods of an existing class when you create a new class
 * - derived class (child) - the class that inherits from another class
 * - base class (parent) - the class being inherited from
 * @brief Car class (child) inherits the attributes and methods from the Vehicle class (parent):
 * Implementation a Vehicle class with some attributes
 * @param brand
 * @param model
 * @param year
 * @param price
 * Defined newline
 * const char newline = '\n';
 */

/// ======================================
/// Base class Vehicle (parent) Inheritance
/// ======================================
class Vehicle
{
public:
    std::string brand;
    std::string model;
    std::string color;
    double price;
    int year;
    int speed(int maxSpeed);
};

/// Derived class (child)

class Car : public Vehicle
{
public:
};

/**
 * * Encapsulation ensures better control of your data and Increased security of data:
 * Implementation a Employee class with some attributes
 * @brief The meaning of Encapsulation, is to make sure that "sensitive"
 * data is hidden from users. To read or modify the value of a private member,
 * We can provide public "get" and "set" methods can Access Private Members
 * @param salary
 * @return employee's salary
 */
class Employee
{
private:
    int salary;

public:
    void setSalary(int s);
    int getSalary();
};

/// ======================================
/// Base class Person (parent) Inheritance
/// Protected access specifier in the inherited class:
/// ======================================
class Employees
{

protected:
    double salary;
};

/// Derived class Programmer (child)
class Programmer : public Employees
{
public:
    int bonus;
    void setSalary(int s);
    int getSalary();
};

/// ========================
/// Multilevel Inheritance
/// ========================
// Base class (parent)
class Parent
{
public:
    void hello();
};

// Derived  class (child)
class Child : public Parent
{
public:
    void sayHi();
};

// Derived  class (GrandChild)
class GrandChild : public Child
{
public:
    void welcome();
};

/// A class can also be derived
/// from more than one base class
/// Base class (parent)
class MyClass
{
public:
    void myFunction();
};

/// Another Base class (parent)
class MyOtherClass
{
public:
    void myOtherFunction();
};

/// Derived class
class MyChildClass : public MyClass, public MyOtherClass
{
};

/**
 * * Polymorphism
 * Polymorphism means "many forms", and it occurs when
 * we have many classes that are related to each other by inheritance.
 * Polymorphism uses those methods to perform different tasks.
 * This allows us to perform a single action in different ways.
 */
class Animal
{
public:
    void animalSound();
};

/// Derived class Cat:
class Cat : public Animal
{
public:
    void animalSound();
};

class Dog : public Animal
{
public:
    void animalSound();
};
