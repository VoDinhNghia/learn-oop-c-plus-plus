#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main() {
   string cmd;
   cout << "Enter cmd: " << endl;
   cin >> cmd;
   if (cmd.empty())
      cout << "Please enter cmd." << endl;
   else if (cmd == "cls") {
      system((cmd).c_str());
   } else
      system(("mkdir " + cmd).c_str());
   return 0;
}