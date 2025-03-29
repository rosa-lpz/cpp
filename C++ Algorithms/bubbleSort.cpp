
#include <iostream>
#include <fstream>         // For file I/O
#include <iomanip>         // For setw()
using namespace std;


void bubbleSort(int arr[], int n) {

      bool swapped = true;
      int j = 0;
      int tmp;

      while (swapped) {
            swapped = false;
            j++;
            for (int i = 0; i < n - j; i++) {
                  if (arr[i] > arr[i + 1]) {
                        tmp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = tmp;
                        swapped = true;
                  }

            }

      }

    system ("pause");
    return 0;
}
