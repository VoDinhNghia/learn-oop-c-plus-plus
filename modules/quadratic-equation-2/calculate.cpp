module;
#include <iostream>
#include<math.h>
import delta;
export module calculate;
using namespace std;

export string handle(double a, double b, double c)
{
  double resultDelta = delta(a, b, c);
  if (resultDelta > 0) {
    double x1 = (-b + sqrt(resultDelta)) / (2*a);
    double x2 = (-b - sqrt(resultDelta)) / (2*a);
    return "x1 = " + to_string(x1) + " , x2 = " + to_string(x2);
  } if (resultDelta == 0) {
    double x = (-b) / (2*a);
    return "x1 = " + to_string(x) + " , x2 = " + to_string(x);
  } else {
    return "Not result";
  }
}