// compiler cmd: g++ -fmodules-ts .\student.cpp .\main.cpp
#include "student.h"
#include <iostream>

using namespace std;

int main() {
    Student st1 {"Nghia", 10};
    Student st2 {"test", -1};

    cout << "Student: " << st1 << endl;
    cout << "Student: " << st2 << endl;
}