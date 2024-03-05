#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

// Dynamic Array Class
class DynamicArray {
private:
    vector<int> data; // Vector to store dynamic array elements

public:
    // Function to insert data into dynamic array
    void insertData(int value) {
        data.push_back(value); // Add value to the end of the vector
    }

    // Function to display dynamic array elements
    void displayData() {
        cout << "Dynamic Array Elements: ";
        for (int num : data) { // Loop through each element in the vector
            cout << num << " "; // Print the element
        }
        cout << endl;
    }

    // Function to adjust the size of the dynamic array
    void adjustSize() {
        int newSize;
        cout << "Enter the new size of the array: ";
        cin >> newSize;
        data.resize(newSize); // Resize the vector to the new size
        cout << "Array resized successfully!" << endl;
    }
};

// Linked List Class
class LinkedList {
private:
    struct Node {
        int data;
        Node* next;

        Node(int val) : data(val), next(nullptr) {}
    };

    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Function to insert data into linked list
    void insertData(int value) {
        Node* newNode = new Node(value);
        if (!head) { // If list is empty, make the new node the head
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) { // Traverse to the end of the list
                current = current->next;
            }
            current->next = newNode; // Insert new node at the end
        }
    }

    // Function to display linked list elements
    void displayData() {
        cout << "Linked List Elements: ";
        Node* current = head;
        while (current) { // Traverse the list and print each element
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

// Stack Class
class CustomStack {
private:
    stack<int> customStack; // Stack to store elements

public:
    // Function to push data onto the stack
    void pushData(int value) {
        customStack.push(value); // Push value onto the stack
    }

    // Function to pop data from the stack
    void popData() {
        if (!customStack.empty()) { // Check if stack is not empty before popping
            customStack.pop(); // Pop the top element from the stack
        }
    }

    // Function to display stack elements
    void displayData() {
        cout << "Stack Elements: ";
        stack<int> tempStack = customStack;
        while (!tempStack.empty()) { // Iterate through the stack and print each element
            cout << tempStack.top() << " ";
            tempStack.pop(); // Pop elements from temporary stack
        }
        cout << endl;
    }
};

// Queue Class
class CustomQueue {
private:
    queue<int> customQueue; // Queue to store elements

public:
    // Function to enqueue data into the queue
    void enqueueData(int value) {
        customQueue.push(value); // Enqueue value into the queue
    }

    // Function to dequeue data from the queue
    void dequeueData() {
        if (!customQueue.empty()) { // Check if queue is not empty before dequeuing
            customQueue.pop(); // Dequeue the front element from the queue
        }
    }

    // Function to display queue elements
    void displayData() {
        cout << "Queue Elements: ";
        queue<int> tempQueue = customQueue;
        while (!tempQueue.empty()) { // Iterate through the queue and print each element
            cout << tempQueue.front() << " ";
            tempQueue.pop(); // Pop elements from temporary queue
        }
        cout << endl;
    }
};

// Binary Tree Class
class BinaryTree {
private:
    struct TreeNode {
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
    };

    TreeNode* root;

    // Function to insert a node into the binary tree
    TreeNode* insertNode(TreeNode* node, int value) {
        if (!node) {
            return new TreeNode(value); // If node is null, create a new node
        }
        if (value < node->data) {
            node->left = insertNode(node->left, value); // Insert into left subtree
        } else if (value > node->data) {
            node->right = insertNode(node->right, value); // Insert into right subtree
        }
        return node;
    }

    // Function to perform inorder traversal of the binary tree
    void inorderTraversal(TreeNode* node) {
        if (node) {
            inorderTraversal(node->left); // Visit left subtree
            cout << node->data << " "; // Print current node
            inorderTraversal(node->right); // Visit right subtree
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    // Function to insert data into the binary tree
    void insertData(int value) {
        root = insertNode(root, value); // Call insertNode function to insert data
    }

    // Function to display binary tree elements using inorder traversal
    void displayData() {
        cout << "Binary Tree Elements (Inorder traversal): ";
        inorderTraversal(root); // Call inorderTraversal function to print elements
        cout << endl;
    }
};

// Main function
int main() {
    cout << "Welcome to the Dynamic Data Structure Program!" << endl;

    // Declare instances of each data structure class
    DynamicArray dynamicArray;
    LinkedList linkedList;
    CustomStack customStack;
    CustomQueue customQueue;
    BinaryTree binaryTree;

    // Main menu loop
    while (true) {
        cout << "\nChoose a data structure to work with:" << endl;
        cout << "1. Dynamic Array" << endl;
        cout << "2. Linked List" << endl;
        cout << "3. Stack" << endl;
        cout << "4. Queue" << endl;
        cout << "5. Binary Tree" << endl;
        cout << "6. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Enter value to insert into the dynamic array: ";
                cin >> value;
                dynamicArray.insertData(value); // Call insertData function for dynamic array
                cout << "Value inserted into the dynamic array!" << endl;
                break;
            }
            case 2: {
                int value;
                cout << "Enter value to insert into the linked list: ";
                cin >> value;
                linkedList.insertData(value); // Call insertData function for linked list
                cout << "Value inserted into the linked list!" << endl;
                break;
            }
            case 3: {
                int value;
                cout << "Enter value to push onto the stack: ";
                cin >> value;
                customStack.pushData(value);
		cout << "Value enqueued into the queue!" << endl;
                break;
            }
            case 5: {
                int value;
                cout << "Enter value to insert into the binary tree: ";
                cin >> value;
                binaryTree.insertData(value);
                cout << "Value inserted into the binary tree!" << endl;
                break;
            }
            case 6: {
                cout << "Exiting the program." << endl;
                return 0;
            }
            default:
                cout << "Invalid choice! Please choose again." << endl;
        }
    }

    return 0;
}
