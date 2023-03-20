#include "student.h"

using namespace std;

Student::Student(string name, int age): name(name), age(1) {
    validateAge(age);
}

void Student::validateName(string newName) {
    newName.empty() ? name = "default name" : name = newName;
}

void Student::validateAge(int newAge) {
    newAge > 0 ? age = newAge : age = 0;
}

ostream& operator<<(ostream& ostr, const Student& stud) {
    ostr << stud.name << ", age: " << stud.age;
    return ostr;
}