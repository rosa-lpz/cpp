/* Logical Operators*/

#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

int main()
{


    int x=4, y=3, z=9, a=4, b=2;

    // Logic Operators: AND (&&), OR(||), NOT(!)
    cout << "(x<y && y !=0) =" << (x<y && y!=0) << endl;
    cout << "(x<y || y !=0) =" << (x<y || y!=0) << endl;
    cout << "!(x<y)= " << !(x<y) << endl;


system("pause");
return 0;

}

