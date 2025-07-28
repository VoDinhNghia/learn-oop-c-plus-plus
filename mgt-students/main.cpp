#include <iostream>
#include "implement.cpp"

int main()
{
    int n;
    ImplementProgram imp = ImplementProgram();
    do
    {
        imp.runProgram();

        cout << "Entry n = 0 to exit program else continue" << endl;
        cin >> n;
        n = n;
    } while (n > 1);
    return 0;
}