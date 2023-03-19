module;
#include <iostream>

export module student;
using namespace std;

class Student
{
    public:
        string sayHi() {
            return "Hello, I'm Nghia";
        }
        double point1, point2;
};

Student createPointStudent() {
    Student student;
    student.point1 = 6.5;
    student.point2 = 8.0;
    return student;
}

export string hello() {
    Student stu;
    return stu.sayHi();
}

export double calculateAvgPoint() {
    Student student1;
    student1 = createPointStudent();
    double x = (student1.point1 + student1.point2) / 2;
    return x;
}