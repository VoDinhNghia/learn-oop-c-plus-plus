#include <iostream>
#include "student.cpp"
#include "services.cpp"
using namespace std;
#include <list>

class ImplementProgram
{
Services service;
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

    void addAndShowStudent(Students newStudent)
    {
        service.addStudentToTxt(newStudent);
        string newStudentInfo = newStudent.showStudentInfo();
        cout << "New student: " << newStudentInfo << endl;
    };

    void searchStudentByName()
    {
        string searchName;
        cout << "Entry name to find in file txt: " << endl;
        cin >> searchName;
        string findResult = service.findStudentWithName(searchName);
        cout << findResult << endl;
    };

    void showAllStudents()
    {
        cout << "list all students: " << endl;
        list<string> lists = service.getAllStudents();
        for (int i = 0; i < lists.size(); i++)
        {
            list<string>::iterator it = lists.begin();
            advance(it, i);
            cout << i << ": " << *it << endl;
        };
    };

public:
    void runProgram()
    {
        string name = entryName();
        int age = entryAge();
        string code = entryCode();
        string major = entryMajor();
        Students newStudent = Students(name, age, code, major);
        addAndShowStudent(newStudent);
        searchStudentByName();
        showAllStudents();
    };
};
