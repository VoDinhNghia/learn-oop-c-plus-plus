#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("file.txt");
    string line;

    if (inputFile.is_open())
    {
        while (getline(inputFile, line))
        {
            cout << line << endl;
        }
        inputFile.close();
    }
    else
    {
        cout << "File can't be opened." << endl;
    }

    return 0;
}