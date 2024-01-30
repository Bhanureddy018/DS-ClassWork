#include <iostream> 
#include <stack>
using namespace std;

int main() {
    // Creating an integer stack named 'stack'
    stack<int> stack;//

    // Pushing values into the stack
    stack.push(21); // Pushing 21 into the stack
    stack.push(22); // Pushing 22 into the stack
    stack.push(24); // Pushing 24 into the stack
    stack.push(25); // Pushing 25 into the stack

    int num = 0;
    stack.push(num); // Pushing the value of 'num' (which is 0) into the stack
    stack.pop();     // Popping the top element from the stack (removing 0)
    stack.pop();     // Popping the top element from the stack (removing 25)
    stack.pop();     // Popping the top element from the stack (removing 24)

    // Printing the remaining elements in the stack
    while (!stack.empty()) {
        cout << stack.top() << " "; // Outputting the top element of the stack
        stack.pop();                
    }

    return 0; // Indicating successful completion of the program
}
