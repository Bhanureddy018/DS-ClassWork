#include <iostream>

using namespace std;

// Define a structure for a binary tree node
struct Node {
    int data;     // Data stored in the node
    Node* left;   // Pointer to the left child node
    Node* right;  // Pointer to the right child node
};

// Function to create a new node with given data
Node* createNode(int data) {
    // Allocate memory for a new node
    Node* newNode = new Node();
    // Set the data of the new node
    newNode->data = data;
    // Initialize left and right child pointers to null
    newNode->left = newNode->right = nullptr;
    // Return the newly created node
    return newNode;
}

// Function to print nodes in a binary tree in postorder traversal
void printPostorder(Node* root) {
    // Base case: if the current node is null, return
    if (root == nullptr)
        return;
    // Recursively traverse the left subtree
    printPostorder(root->left);
    // Recursively traverse the right subtree
    printPostorder(root->right);
    // Print the data of the current node
    cout << root->data << " ";
}

int main() {
    // Create the root node with data 1
    Node* root = createNode(1);
    // Create left and right child nodes of the root
    root->left = createNode(2);
    root->right = createNode(3);
    // Create a left child node of the left child of the root
    root->left->left = createNode(4);

    // Print the postorder traversal of the tree
    cout << "Postorder traversal of the tree: ";
    printPostorder(root);
    cout << endl;

    // Free the memory allocated for nodes to avoid memory leaks
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
