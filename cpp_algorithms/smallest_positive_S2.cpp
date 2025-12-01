#include <iostream>
#include <vector>
#include <limits> // For INT_MAX

using namespace std;

int smallestPositive(vector<int> arr) {
    int smallestPos = INT_MAX; // Initialize with a large value
    bool found = false; // To check if a positive number exists

    for (int num : arr) {
        if (num > 0 && num < smallestPos) {
            smallestPos = num;
            found = true;
        }
    }

    return found ? smallestPos : -1; // Return -1 if no positive number is found
}

int main() {
    vector<int> arr1 = {-5, -1, -10, 0};
    vector<int> arr2 = {3, -5, 0, 1, 7};
    vector<int> arr3 = {10, 2, 5, -3};
    vector<int> arr4 = {0, -2, -3, 4};

    cout << smallestPositive(arr1) << endl; // Output: -1
    cout << smallestPositive(arr2) << endl; // Output: 1
    cout << smallestPositive(arr3) << endl; // Output: 2
    cout << smallestPositive(arr4) << endl; // Output: 4

    return 0;
}
