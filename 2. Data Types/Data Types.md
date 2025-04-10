# **C++ Basic Data Types**



The data type specifies the size and type of information the variable will store:

| Data Type | Size         | Description                                                  |
| --------- | ------------ | ------------------------------------------------------------ |
| `boolean` | 1 byte       | Stores true or false values                                  |
| `char`    | 1 byte       | Stores a single character/letter/number, or ASCII values     |
| `int`     | 2 or 4 bytes | Stores whole numbers, without decimals                       |
| `float`   | 4 bytes      | Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits |
| `double`  | 8 bytes      | Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits |





## Example 1

**Objective**: A program that declares variables of different data types and prints their sizes and values.

**Description**:

- Declaration of variables of type `int`, `char`, `float`, `double`, `bool`.
- `sizeof()` operator to print the size of each variable in bytes.
- Print the value of each variable



```c++
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

```





## Switch Between Data Types (Float and Integer)

**Objective**: Create a program that reads an integer and a floating-point number, then adds them and shows the result with different data types.

**Description**:

- Declaration one integer and one float.
- Add the two numbers and cast the result into both `float` and `int`.
- Print the results of each addition and type casting.

## Example 2

```c++
#include <iostream>
using namespace std;

int main() {
    int integerNum = 5;
    float floatNum = 10.75;

    // Adding integer and float
    float result = integerNum + floatNum;

    // Showing results with casting
    cout << "Result as float: " << result << endl;
    cout << "Result casted to int: " << (int)result << endl;

    return 0;
}


```

