// compiler: g++ -fmodules-ts .\delta.cpp .\calculate.cpp .\main.cpp
#include <iostream>
import calculate;

using namespace std;
int main (void)
{
  double a, b, c;
  cout << "Enter value of a: \n";
  cin >> a;
  cout << "Enter value of b: \n";
  cin >> b;
  cout << "Enter value of c: \n";
  cin >> c;
  string result = handle(a, b, c);
  cout << "result: " << result << "\n";
  return 0;
}