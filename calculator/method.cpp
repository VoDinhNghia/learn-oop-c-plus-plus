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