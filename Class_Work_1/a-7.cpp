#include <iostream>
using namespace std;

int main() {
    // Establishing an array of strings named "cars" with a capacity of 5 and initializing its values
    string cars[5] = {"Volvo", "Toyota", "Ford", "Tesla", "Honda"};

    // Determining the number of elements in the array
    int numElements = sizeof(cars) / sizeof(string);

    // Utilizing a for loop to iterate through each element in the array
    for (int i = 0; i < numElements; i++) {
        // Displaying the name of each car followed by a newline
        cout << cars[i] << "\n";
    }

    // The main function implicitly returns 0, indicating successful execution
    return 0;
}

