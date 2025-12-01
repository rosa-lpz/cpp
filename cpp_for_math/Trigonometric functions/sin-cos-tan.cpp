/*
Program that allows the user to obtain the
result of the functions: sine, cosine or tangent,
depending on their choice, from some variable that
the user himself enters.

At the end, the program will display the user's operation time.
*/

#include <iostream>
#include <cmath>      // For trigonometric functions
#include <ctime>    // To measure the execution time

using namespace std;

int main() {
    clock_t t;
    t=clock();


    // Declaration of variables
    double angle, result;
    int selection;

    // Menu de seleccion de funciones
    cout << "Choose a trigonometric function:" << endl;
    cout << "1. Sine" << endl;
    cout << "2. Cosine" << endl;
    cout << "3. Tangent" << endl;
    cout << "Select the operation to perform (1/2/3): ";
    cin >> selection;

    // Usuario escribe angulo
    cout << "Enter the angle (in degrees): ";
    cin >> angle;

    // Convert the angle to radians because trigonometric functions in C++ use radians
    double radians = angle * M_PI / 180.0;


    // Trigonometric calculations according to user selection
    switch (selection) {
        case 1:
            result = sin(radians);
            cout << "Sine(" << angle << ") = " << result << endl;
            break;
        case 2:
            result = cos(radians);
            cout << "Cosine(" << angle  << ") = " << result << endl;
            break;
        case 3:
            result = tan(radians);
            cout << "Tangent(" << angle  << ") = " << result << endl;
            break;
        default:
            cout << "Invalid selection" << endl;
            return 1;
    }

    /*The clock() function allows us to obtain the computer time at the end of our program,
    the subtraction operation allows us to obtain a time interval.*/
    t=clock()-t;
    cout<<"The execution time of the calculator was: "<<float(t)/CLOCKS_PER_SEC<<" seconds";

    return 0;
}
