/*
    The reverseLinkedList function takes the head of the linked list as input and returns the head of the reversed list.
    It initializes three pointers: prev, current, and next. prev is initially set to nullptr, current is set to the head of the list, and next is set to nullptr.
    The function iterates through the list, reversing the links between nodes. At each iteration, it updates the next pointer to store the next node, sets the next pointer of the current node to the previous node (prev), and moves the prev and current pointers one step forward.
    After traversing the entire list, prev will point to the new head of the reversed list, so the function returns prev.
*/

#include <iostream>

// Define a struct representing a node in a linked list
struct Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize a node with given data and next pointer
    Node(int new_data) : data(new_data), next(nullptr) {}
};

// Function to reverse a linked list iteratively
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;   // Pointer to the previous node, initially nullptr
    Node* current = head;   // Pointer to the current node, initially the head
    Node* next = nullptr;   // Pointer to the next node, initially nullptr

    // Traverse the list, reversing the links
    while (current != nullptr) {
        next = current->next;   // Store the next node
        current->next = prev;   // Reverse the link

        // Move pointers one step forward for the next iteration
        prev = current;
        current = next;
    }

    // After the loop, 'prev' will point to the new head of the reversed list
    return prev;
}

// Function to print elements of the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " "; // Print the data of the current node
        current = current->next;           // Move to the next node
    }
    std::cout << std::endl; // Print a newline character after printing the list
}

int main() {
    // Create a linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    std::cout << "Original linked list: ";
    printList(head);

    // Reverse the linked list
    head = reverseLinkedList(head);

    std::cout << "Reversed linked list: ";
    printList(head);

    return 0;
}
