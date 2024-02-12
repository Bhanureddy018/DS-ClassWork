#include <iostream>
using namespace std;

int main() {
    // Establishing an array of integers named "mynumbers" with a capacity of 5
    int mynumbers[5] = {10, 20, 30, 40, 50};

    // Utilizing a range-based for loop to iterate through each element in the array
    // Displaying each element followed by a newline
    for (int i : mynumbers) {
        cout << i << "\n";
    }

    // The main function implicitly returns 0, indicating successful execution
    return 0;
}
