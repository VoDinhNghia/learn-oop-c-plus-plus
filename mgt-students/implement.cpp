#include <iostream>
#include "student.cpp"
#include "method.cpp"
using namespace std;
#include <list>

class ImplementProgram
{
private:
    string entryName() {
        string name;
        cout << "Entry name: " << endl;
        cin >> name;
        return name;
    };
    int entryAge() {
        int age;
        cout << "Entry age: " << endl;
        cin >> age;
        return age;
    };
    string entryCode() {
        string code;
        cout << "Entry code: " << endl;
        cin >> code;
        return code;
    };
    string entryMajor() {
        string major;
        cout << "Entry major: " << endl;
        cin >> major;
        return major;
    };
public:
    void runProgram()
    {
        string name = entryName();
        int age = entryAge();
        string code = entryCode();
        string major = entryMajor();

        Students newStudent = Students(name, age, code, major);
        Methods mt;

        mt.addStudent(newStudent);
        newStudent.showStudentInfo();

        string searchName;
        cout << "Entry name to find in file txt: " << endl;
        cin >> searchName;
        string findResult = mt.findStudentByName(searchName);
        cout << findResult << endl;

        cout << "list all students: " << endl;
        mt.showAllStudents();
    };
};
