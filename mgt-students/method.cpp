#include <iostream>
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

    void findStudentByName(string name)
    {
        service.findStudentWithName(name);
    };
};
