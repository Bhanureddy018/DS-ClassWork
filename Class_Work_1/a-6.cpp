#include <iostream>
using namespace std;

int main() {
    // Establishing an array of integers named "mynumbers" with a capacity of 5 and initializing its values
    int mynumbers[5] = {10, 20, 30, 40, 50};

    // Displaying the size (in bytes) of the entire array using the sizeof operator
    cout << "Size of mynumbers array: " << sizeof(mynumbers) << endl;

    // Displaying the size (in bytes) of an individual integer using sizeof
    cout << "Size of int data type: " << sizeof(int) << endl;

    // The main function implicitly returns 0, indicating successful execution
    return 0;
}
