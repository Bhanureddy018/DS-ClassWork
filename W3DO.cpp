#include <iostream>
using namespace std;

int main() {
    // Initialize an array with integer values
    int a[] = { 8, 7, 6, 5, 2, 4, 1, 3, 9 };

    // Calculate the length of the array
    int arrayLength = sizeof(a) / sizeof(int);

    // Bubble sort algorithm to sort the array in descending order
    for (int i = 0; i < arrayLength; i++) {
        // Iterate through the array up to the last but one element
        for (int j = 0; j < arrayLength - 1; j++) {
            // Compare adjacent elements and swap if necessary to sort in descending order //
            if (a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];//
                a[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    cout << "Sorted Array (Descending Order): ";
    for (int i = 0; i < arrayLength; i++) {
        cout << a[i] << " ";
    }

    return 0; // Indicating successful completion of the program
}
