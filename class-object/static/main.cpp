// compiler cmd: g++ -o main .\main.cpp
//
#include <iostream>
using namespace std;
class Student {
    string name;
    int age;
    int numberId;
    public:
        static string universityName;
        static int countStudent;
        static int id;
        Student(string name, int age, int numberId) {
            this->name = name;
            this->age = age;
            this->numberId = numberId;
            countStudent++;
        }
        int generateId() {
            return ++id;
        }
        void showInfo() {
            cout << "name: " << this->name << ", age: " << this->age << ", numberId: " << this->numberId << ", university: " << universityName << endl;
            cout << "have " << this->countStudent << " student created." << endl;
            cout << "generate Id: " << this->generateId() << endl;
        }
};

string Student::universityName = "University Name";
int Student::countStudent = 0;
int Student::id = 2023;

int main() {
    Student st1 = Student("Nghia", 27, 16929);
    st1.showInfo();
    Student st2 = Student("Vo Nghia", 27, 1999);
    st2.showInfo();
    return 0;
}
