#include <iostream>
#include "util.cpp"
using namespace std;

class Student {
    string name;
    int age;
    string code;
    string major;
    
    public:
        Student(string name, int age, string code, string major) {
            this->name = name;
            this->age = age;
            this->code = code;
            this->major = major;
        }

        void add() {
            addStudentToTxt(this->name, this->age, this->code, this->major);
        };

        void showInfo() {
            cout << this->name << " " << this->age << " " << this->code << " " << this->major << endl;
        }

        void findByName(string name) {
            findStudentWithName(name);
        }
};
