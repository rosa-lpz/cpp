/*
Date: 31/01/17
Description: Given a number, calculate the absolute value
*/

#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
    // Declaration of a number
    int number;

    cout << "Enter a number" << endl;
    cin >> number;

    if (number<0)
    {
        number=number*-1;
    }
    cout << "The absolute value is = " << number<< endl;
    system("pause");
    return 0;
}
