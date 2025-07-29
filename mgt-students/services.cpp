#include <iostream>
#include <fstream>
#include "student.cpp"
#include "constant.cpp"
using namespace std;

class Services
{
public:
    Constants cons;
    void addStudentToTxt(Students s)
    {
        ofstream outputFile;
        outputFile.open(cons.file.txtAddress, ios::app);
        if (outputFile.is_open())
        {
            outputFile << s.getName() << " " << s.getAge() << " " << s.getCode() << " " << s.getMajor() << endl;
            outputFile.close();
            cout << "Data written to student.txt successfully." << endl;
        }
        else
        {
            cerr << "Error: Could not open file for writing." << endl;
        }
    };

    void findStudentWithName(string name)
    {
        ifstream inputFile(cons.file.txtAddress);
        if (!inputFile.is_open())
        {
            std::cerr << "Error opening file!" << std::endl;
        }
        string line;
        int currentLineNumber = 0;
        while (getline(inputFile, line))
        {
            currentLineNumber++;
            if (line.find(name) != string::npos)
            {
                cout << "Found '" << name << "' in line " << currentLineNumber << ": " << line << endl;
            }
        }
        inputFile.close();
    };
};