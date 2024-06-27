#include <iostream>
#include "source.cpp"

/**
 * @brief  main program for Object-oriented programming:
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully:
 */

int main()
{

    /// Create Car (1) objects:
    Car car1;
    car1.brand = "BMW";
    car1.model = "X5";
    car1.color = "Blue";
    car1.year = 1999;
    car1.price = 90.295L;

    /// Print values of car (1):
    std::cout
        << "Brand: " << car1.brand << "\n"
        << "Model: " << car1.model << "\n"
        << "Color: " << car1.color << "\n"
        << "Made: " << car1.year << "\n"
        << "Price: " << '$' << car1.price << "\n"
        << "Speed: " << car1.speed(200) << "\n";
    std::cout << "--------------" << std::endl;

    /// Create Car (2) objects:
    Car car2;
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.color = "Red";
    car2.year = 1969;
    car2.price = 61.080L;

    /// Print values of car (2):
    std::cout << "Brand: " << car2.brand << "\n"
              << "Model: " << car2.model << "\n"
              << "Color: " << car2.color << "\n"
              << "Made: " << car2.year << "\n"
              << "Price: " << '$' << car2.price << "\n"
              << "Speed: " << car2.speed(200) << "\n";
    std::cout << "------------" << std::endl;

    /// Create Employee (1) objects:
    Employee emp1;
    emp1.setSalary(800'000);
    std::cout << "Emp1Salary: " << '$' << emp1.getSalary() << "\n";

    /// Create Employee (2) objects
    Employee emp2;
    emp2.setSalary(500'000);
    std::cout << "Emp2Salary: " << '$' << emp2.getSalary() << "\n";
    std::cout << "------------" << std::endl;

    /// Create pogrammer (1) objects:
    Programmer p1;
    p1.setSalary(500'000);
    p1.bonus = 150'000;

    std::cout << "Salary: " << '$' << p1.getSalary() << "\n";
    std::cout << "Bonus: " << '$' << p1.bonus << "\n";
    std::cout << "=========================" << std::endl;

    /// Create GrandChild objects:
    GrandChild grand;
    grand.hello();
    grand.sayHi();
    grand.welcome();
    std::cout << "=========================" << std::endl;

    /// Create MyChildClas objects:
    MyChildClass obj;
    obj.myFunction();
    obj.myOtherFunction();
    std::cout << "=========================" << std::endl;

    /// Create Animal objects:
    Animal myAnimal;
    Cat myCat;
    Dog myDog;

    myAnimal.animalSound();
    myCat.animalSound();
    myDog.animalSound();
    return 0;
}
