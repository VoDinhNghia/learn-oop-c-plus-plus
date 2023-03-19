#include <iostream>
using namespace std;

// pass by value
void noReturn(string param = "default value") {
    cout << param << "function no return.\n";
}
// pass by reference
void swapTwoNumber(int &numberOne, int &numberTwo) {
    int numberThree = numberOne;
    numberOne = numberTwo;
    numberTwo = numberThree;
}

int returnTypeInt(int numberA, int numberB) {
    int result = numberA + numberB;
    return result;
}
// pass by reference
string reverseStr(string &str) {
    string reverse(str.rbegin(), str.rend());
    return reverse;
}

// Sequential run should write func differ at above func main
int main() {
    // ----------- func noReturn --------------------------
    noReturn("Hello, this is");
    // ----------- func swapTwoNumber ---------------------
    int numberOne = 1;
    int numberTwo = 2;
    swapTwoNumber(numberOne, numberTwo);
    cout << "number one: " << numberOne << " , number two: " << numberTwo << "\n";
    // ----------- func returnTypeInt ---------------------
    int calculateTwoInt = returnTypeInt(10, 15);
    cout << "result of calculate is: " << calculateTwoInt << "\n";
    // ----------- func reverseStr ---------------------
    string str = "ThisIsStringReverse";
    cout << "result reverse string: " << reverseStr(str) << "\n";
    return 0;
}

