#include <iostream>
using namespace std;
class Calculator {
    float numberA;
    float numberB;

    public:
        Calculator(float numberA, float numberB) {
            this->numberA = numberA;
            this->numberB = numberB;
        }

        float add() {
            return this->numberA + this->numberB;
        }
        
        float sub() {
            return this->numberA - this->numberB;
        }

        float multi() {
            return this->numberA * this->numberB;
        }

        float div() {
            return this->numberA / this->numberB;
        }
};

void showResult(string name, float result) {
    cout << "result " << name << ": " << result << endl;
}

int main() { 
    int n;   
    do {
        float numberA;
        float numberB;
        int option;
        cout << "Entry number a:" << endl;
        cin >> numberA;
        cout << "Entry number b:" << endl;
        cin >> numberB;
        cout << "options:" << endl;
        cout << "1: add \n" << endl;
        cout << "2: sub \n" << endl;
        cout << "3: mult \n" << endl;
        cout << "4: div \n" << endl;
        cout << "Entry option:" << endl;
        cin >> option;
        Calculator cal = Calculator(numberA, numberB);
        switch(option){
            case 1:
                showResult("add", cal.add());
                break;
            case 2:
                showResult("sub", cal.sub());
                break;
            case 3:
                showResult("mult", cal.multi());
                break;
            case 4:
                showResult("div", cal.div());
                break;
            default:
            cout << "you're option don't match!\n";
        }
        cout << "Entry n = 0 to exit else continue" << endl;
        cin >> n;
        n = n;
    } while (n > 1);
    
    return 0;
}
