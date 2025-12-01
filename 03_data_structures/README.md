# Arrays



## Example 1

```c++

#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array of integers
    int arr[5] = {1, 2, 3, 4, 5};

    // Accessing elements using index
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}
```



## Example 2

Demonstrate the use of **arrays** with different data types.

- Declare arrays of type `int`, `float`, and `char`.
- Initialize the arrays with appropriate values.
- Print the values of the arrays.



```c++
#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array of integers
    int intArray[3] = {1, 2, 3}; // array of integers
    float floatArray[3] = {1.1f, 2.2f, 3.3f}; // array of float numbers
    char charArray[3] = {'A', 'B', 'C'}; // array of char

    // Print integers
    cout << "Int array: ";
    for (int i = 0; i < 3; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    // Print float numbers
    cout << "Float array: ";
    for (int i = 0; i < 3; i++) {
        cout << floatArray[i] << " ";
    }
    cout << endl;

    // Print char 
    cout << "Char array: ";
    for (int i = 0; i < 3; i++) {
        cout << charArray[i] << " ";
    }
    cout << endl;

    return 0;
}


```



