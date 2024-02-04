#include <iostream>
using namespace std;

int main() {
    // Establishing an array to store car brands with a capacity of 4
    string cars[4] = {"Volvo", "BMW", "Tesla", "Ford"};

    // Updating the initial element in the array to "Opel"
    cars[0] = "Opel";

    // Outputting the modified value of the first element
    cout << cars[0];

    // The main function implicitly returns 0, indicating successful execution
    return 0;
}
