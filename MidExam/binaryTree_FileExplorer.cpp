#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Node structure for binary tree representing file explorer
struct TreeNode {
    string name;
    vector<TreeNode*> children; // Vector to hold pointers to child nodes

    TreeNode(const string& n) : name(n) {} // Constructor to initialize node with a name
};

// Function to build the file explorer tree recursively
TreeNode* buildFileExplorer() {
    string name;
    cout << "Enter directory name (or \"-1\" to stop): ";
    cin >> name;

    if (name == "-1") {
        return nullptr; // Return nullptr to indicate end of directory input
    }

    TreeNode* node = new TreeNode(name); // Create a new node with the entered name
    cout << "Enter number of children for directory \"" << name << "\": ";
    int numChildren;
    cin >> numChildren;

    for (int i = 0; i < numChildren; ++i) {
        node->children.push_back(buildFileExplorer()); // Recursively build child nodes
    }

    return node; // Return the constructed node
}

// Function to display the file explorer tree
void displayFileExplorer(TreeNode* root, int depth = 0) {
    if (!root) {
        return; // If the node is nullptr, return to the caller
    }

    for (int i = 0; i < depth; ++i) {
        cout << "  "; // Indent based on the depth of the node in the tree
    }
    cout << "|_" << root->name << endl; // Display the name of the current directory

    for (TreeNode* child : root->children) {
        displayFileExplorer(child, depth + 1); // Recursively display child nodes
    }
}

// Function to delete the file explorer tree to free memory
void deleteFileExplorer(TreeNode* root) {
    if (!root) {
        return; // If the node is nullptr, return to the caller
    }

    for (TreeNode* child : root->children) {
        deleteFileExplorer(child); // Recursively delete child nodes
    }

    delete root; // Delete the current node
}

int main() {
    TreeNode* root = nullptr; // Initialize root of the file explorer tree to nullptr

    cout << "Welcome to File Explorer Builder!" << endl;
    cout << "Please enter the directory structure." << endl;

    root = buildFileExplorer(); // Build the file explorer tree recursively

    cout << "\nFile Explorer Structure:" << endl;
    displayFileExplorer(root); // Display the file explorer tree

    // Clean up memory
    deleteFileExplorer(root); // Delete the file explorer tree to free memory

    return 0;
}
