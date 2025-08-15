#include <iostream>
#include <fstream>
#include <list>
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
            cout << "Data written to " << cons.file.txtAddress << " successfully." << endl;
        }
        else
        {
            cerr << "Error: Could not open file for writing." << endl;
        }
    };

    string findStudentWithName(string name)
    {
        ifstream inputFile(cons.file.txtAddress);
        if (!inputFile.is_open())
        {
            string errs = "Error opening file!";
            return errs;
        }
        string line;
        int currentLineNumber = 0;
        string result = name + " not found in file " + cons.file.txtAddress;
        while (getline(inputFile, line))
        {
            currentLineNumber++;
            if (line.find(name) != string::npos)
            {
                result = "Found '" + name + "' in line " + to_string(currentLineNumber) + ": " + line;
                break;
            }
        }
        inputFile.close();
        return result;
    };

    list<string> getAllStudents()
    {
        list<string> arr;
        string lineOfFile;
        ifstream myReadFile(cons.file.txtAddress);
        while (getline(myReadFile, lineOfFile))
        {
            arr.push_back(lineOfFile);
        }
        return arr;
    };
};