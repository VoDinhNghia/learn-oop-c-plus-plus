module;
#include <iostream>
export module delta;
using namespace std;

export double delta(double a, double b, double c)
{
  double result = b*b - 4*a*c;
  return result;
}