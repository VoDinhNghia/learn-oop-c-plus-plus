#include <string>
#include <iostream>

using namespace std;

class Student {
    string name;
    int age;
    public:
        Student(string name, int age);
        void validateName(string name);
        void validateAge(int age);
        friend ostream &operator<<(ostream &ostr, const Student &stud);
};

ostream &operator<<(ostream &ostr, const Student &stud);