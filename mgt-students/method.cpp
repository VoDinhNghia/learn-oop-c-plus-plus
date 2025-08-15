#include <iostream>
#include <list>
#include "services.cpp"
#include "student.cpp"
using namespace std;

class Methods
{
public:
    Services service;
    void addStudent(Students s)
    {
        service.addStudentToTxt(s);
    };

    string findStudentByName(string name)
    {
        string result = service.findStudentWithName(name);
        return result;
    };

    list<string> getAll() 
    {
        list<string> lists = service.getAllStudents();
        return lists;
    };
};
