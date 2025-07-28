#include <iostream>
using namespace std;
#pragma once
class Students
{
    string name;
    int age;
    string code;
    string major;

public:
    Students(string name, int age, string code, string major)
    {
        this->name = name;
        this->age = age;
        this->code = code;
        this->major = major;
    };

    string getName()
    {
        return this->name;
    };

    int getAge()
    {
        return this->age;
    };

    string getCode()
    {
        return this->code;
    };

    string getMajor()
    {
        return this->major;
    };

    void showStudentInfo()
    {
        cout << this->name << " " << this->age << " " << this->code << " " << this->major << endl;
    };
};
