/*Iterative Solution:

    This method involves traversing the linked list using a loop.
    We compare the value of each node with the target element until a match is found or we reach the end of the list.
    If a match is found, we return the node containing the target element; otherwise, we return nullptr to indicate that the element is not present.
    Iterative approach is more memory-efficient for large lists as it doesn't incur additional function call overhead.
    However, it may require more code and is typically less elegant compared to the recursive approach.
*/

/*
Recursive Solution:

    In this approach, we divide the problem into smaller subproblems by recursively calling the search function on each subsequent node.
    The base case is when we reach the end of the list (i.e., the current node is nullptr), in which case we return nullptr.
    We compare the value of the current node with the target element and return the node if found.
    Recursive approach is often more concise and elegant, especially for problems that naturally lend themselves to recursion.
    However, it may incur additional overhead due to function calls, potentially leading to stack overflow errors for very long lists or deeply nested function calls.
*/

/*
Comparison:

    Both solutions aim to achieve the same result: finding an element in a linked list.
    The iterative solution typically requires less memory overhead and may be more efficient for large lists.
    The recursive solution often results in more concise and readable code but may lead to stack overflow errors for very large or deeply nested lists.

Overall, the choice between iterative and recursive solutions depends on factors such as code simplicity, efficiency, and specific requirements of the problem at hand.
*/

#include <iostream>

// Define a struct representing a node in a linked list
struct Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize a node with given data and next pointer
    Node(int new_data) : data(new_data), next(nullptr) {}
};

// Function to search for an element in a linked list iteratively
Node* searchIterative(Node* head, int target) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == target) {
            return current; // Element found, return the node
        }
        current = current->next; // Move to the next node
    }
    return nullptr; // Element not found
}

// Function to search for an element in a linked list recursively
Node* searchRecursive(Node* head, int target) {
    // Base case: reached end of list
    if (head == nullptr) {
        return nullptr;
    }
    // Check if current node contains the target element
    if (head->data == target) {
        return head; // Element found, return the node
    }
    // Recursive call on the next node
    return searchRecursive(head->next, target);
}

int main() {
    // Create a linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Search for elements using iterative solution
    int target1 = 3;
    Node* resultIterative = searchIterative(head, target1);
    if (resultIterative != nullptr) {
        std::cout << "Element " << target1 << " found using iterative solution." << std::endl;
    } else {
        std::cout << "Element " << target1 << " not found using iterative solution." << std::endl;
    }

    // Search for elements using recursive solution
    int target2 = 5;
    Node* resultRecursive = searchRecursive(head, target2);
    if (resultRecursive != nullptr) {
        std::cout << "Element " << target2 << " found using recursive solution." << std::endl;
    } else {
        std::cout << "Element " << target2 << " not found using recursive solution." << std::endl;
    }

    return 0;
}
