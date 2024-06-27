#include <iostream>

class Grade {
   private:
    double grade;

   public:
    Grade(double g);
    operator double();
    operator char();
};

Grade::Grade(double g) : grade(g) {}
Grade::operator double() { return grade; }
Grade::operator char() {
    if (grade >= 90)
        return 'A';
    else if (grade >= 80)
        return 'B';
    else if (grade >= 70)
        return 'C';
    else if (grade >= 60)
        return 'D';
    else if (grade >= 50)
        return 'E';
    else
        return 'F';
}

int main(int argc, char const *argv[]) {
    Grade grade1(49);
    // Grade grade1[]{90, 80, 70, 60, 50};

    double grade2 = grade1;
    char grades = grade1;
    std::cout << grade2 << std::endl;
    std::cout << grades << std::endl;

    return 0;
}
