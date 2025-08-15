#include <iostream>
#include <list>
#include <bits/stdc++.h>
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

    void showAllStudents() 
    {
        list<string> lists = service.getAllStudents();
        for (int i = 0; i < lists.size(); i++)
        {
            list<string>::iterator it = lists.begin();
            advance(it, i);
            cout << ++i << ": " << *it << endl;
        };
    };
};
