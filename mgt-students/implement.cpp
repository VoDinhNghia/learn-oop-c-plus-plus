#include <iostream>
#include "student.cpp"
using namespace std;

void runProgram () {
    string name;
    int age;
    string code;
    string major;
    cout << "Entry name: " << endl;
    cin >> name;
    cout << "Entry age: " << endl;
    cin >> age;
    cout << "Entry code: " << endl;
    cin >> code;
    cout << "Entry major: " << endl;
    cin >> major;
    Student st1 = Student(name, age, code, major);
    st1.add();
    st1.showInfo();
    string searchName;
    cout << "Entry name to find in find txt: " << endl;
    cin >> searchName;
    st1.findByName(searchName);
}