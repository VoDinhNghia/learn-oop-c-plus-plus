module;
#include <iostream>
#include <string_view>
export module test;
using namespace std;
export void hello(string_view const &name)
{
  cout << "Hello " << name << "!\n";
}