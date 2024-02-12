/*    The function reverseLinkedListRecursive takes the head of the linked list as input and returns the head of the reversed list.
    It contains a base case: if the list is empty or has only one node, it returns the head unchanged.
    Otherwise, it recursively reverses the rest of the list starting from the second node.
    As the recursion reaches the last node, it adjusts the pointers to reverse the link for each node.
    Finally, it returns the new head of the reversed list, which corresponds to the last node of the original list.
*/

#include <iostream>

// Define a struct representing a node in a linked list
struct Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize a node with given data and next pointer
    Node(int new_data) : data(new_data), next(nullptr) {}
};

// Function to reverse a linked list recursively
Node* reverseLinkedListRecursive(Node* head) {
    // Base case: if the list is empty or has only one node
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Reverse the rest of the list starting from the second node
    Node* reversed_list = reverseLinkedListRecursive(head->next);

    // Adjust pointers to reverse the link for the current node
    head->next->next = head;
    head->next = nullptr;

    // Return the new head of the reversed list
    return reversed_list;
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

    // Reverse the linked list recursively
    head = reverseLinkedListRecursive(head);

    std::cout << "Reversed linked list: ";
    printList(head);

    return 0;
}
