#include <iostream>
using namespace std;

int main() {
    // Establishing an array to store car brands with a capacity of 4
    string cars[4] = {"Volvo", "BMW", "Tesla", "Ford"};

    // Iterating through each element in the array
    for (int i = 0; i < 4; i++) {
        // Outputting the name of each car followed by a comma and newline
        cout << cars[i] << ",\n";
    }

    // The main function implicitly returns 0, indicating successful execution
    return 0;
}
