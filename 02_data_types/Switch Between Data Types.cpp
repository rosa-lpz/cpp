
#include <iostream>
using namespace std;

int main() {
    // Declaration of one integer and one float.
    int integerNum = 5;
    float floatNum = 10.75;

    // Adding integer and float
    float result = integerNum + floatNum;

    // Showing results with casting
    cout << "Result as float: " << result << endl;
    cout << "Result casted to int: " << (int)result << endl;

    return 0;
}
