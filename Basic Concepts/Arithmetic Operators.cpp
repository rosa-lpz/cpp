/* Arithmetic operators*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

  int x, y, division, module;
  float z, h, division2;

  x=10;
  y=3;
  z=2.1;
  h=5.3;
  division=x/y;
  division2=z/h;
  module=x%y;

  cout << "Division x/y= " << division << endl;
  cout << "Division z/h= " << division2 << endl;
  cout << "Module z%h= " << module << endl;


  system("pause");
  return 0;

}

