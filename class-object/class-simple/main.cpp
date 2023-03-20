#include <iostream>
import student;

using namespace std;
int main (void)
{
  string result = hello();
  cout << "result: " << result << endl;
  double avgPoint = calculateAvgPoint();
  cout << "avgPoint: " << avgPoint << endl;
  return 0;
}