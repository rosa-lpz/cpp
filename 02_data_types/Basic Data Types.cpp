
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    char b = 'A';
    float c = 5.5f;
    double d = 10.1234;
    bool e = true;

    cout << "Size of int: " << sizeof(a) << " bytes, Value: " << a << endl;
    cout << "Size of char: " << sizeof(b) << " bytes, Value: " << b << endl;
    cout << "Size of float: " << sizeof(c) << " bytes, Value: " << c << endl;
    cout << "Size of double: " << sizeof(d) << " bytes, Value: " << d << endl;
    cout << "Size of bool: " << sizeof(e) << " bytes, Value: " << e << endl;

    return 0;
}
