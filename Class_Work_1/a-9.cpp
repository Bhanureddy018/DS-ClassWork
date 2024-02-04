#include <iostream>
using namespace std;

int main() {
    // Establishing a 3D array of strings named "letters" with dimensions 2x2x2
    string letters[2][2][2] = {
        {
            {"A", "B"},
            {"C", "D"}
        },
        {
            {"E", "F"},
            {"G", "H"}
        }
    };

    // Utilizing nested loops to iterate through each element in the 3D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                // Displaying each element followed by a newline
                cout << letters[i][j][k] << "\n";
            }
        }
    }

    // The main function implicitly returns 0, indicating successful execution
    return 0;
}
