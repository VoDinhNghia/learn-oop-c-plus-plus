// compiler cmd: g++ -o main .\main.cpp
#include <iostream>
using namespace std;
class Student {
    string name;
    int age;
    int numberId;
    public:
        void set(string name, int age, int numberId) {
            this->name = name;
            this->age = age;
            this->numberId = numberId;
        }
        Student &changeValueName(string newName, int newAge) {
            name = newName;
            age = newAge;
            return *this;
        }
        void showInfo() {
            cout << "name: " << this->name << ", age: " << this->age << ", numberId: " << this->numberId << endl;
        }
};

int main() {
    Student st1 = Student();
    st1.set("Nghia", 27, 16929);
    st1.showInfo();
    Student st2 = Student();
    st2.set("Nghia Vo", 27, 1777);
    st2.showInfo();
    st2.changeValueName("Vo Dinh Nghia", 28);
    st2.showInfo();
    return 0;
}
