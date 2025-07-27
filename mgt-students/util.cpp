#include <iostream>
#include <fstream>
using namespace std;

void addStudentToTxt(string name, int age, string code, string major) {
    ofstream outputFile;
    outputFile.open("student.txt", ios::app);
    if (outputFile.is_open()) {
        outputFile << name << " " << age << " " << code << " " << major << endl;
        outputFile.close();
        cout << "Data written to student.txt successfully." << endl;
    } else {
        cerr << "Error: Could not open file for writing." << endl;
    }
};

void findStudentWithName(string name) {
    ifstream inputFile("student.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
    }
    string line;
    int currentLineNumber = 0;
    while (getline(inputFile, line)) {
        currentLineNumber++;
        if (line.find(name) != string::npos) {
            cout << "Found '" << name << "' in line " << currentLineNumber << ": " << line << endl;
        }
    }
    inputFile.close();
};