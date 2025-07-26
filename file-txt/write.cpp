#include <iostream>
#include <fstream>
using namespace std;

void writeFileTxt() {
    ofstream outFile("output.txt");

    if (outFile.is_open()) {
        outFile << "Hello from C++!" << endl;
        outFile << "Writing to a text file." << endl;
        outFile << 12345789 << endl;

        outFile.close();
        cout << "Data written to output.txt successfully." << endl;
    } else {
        cerr << "Error: Could not open file for writing." << endl;
    }
}