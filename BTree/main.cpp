#include <iostream>
using namespace std;

// Node structure represents each element in the tree
struct Node {
    int data; // The value stored in this node
    Node *left; // Pointer to left child (smaller values)
    Node *right; // Pointer to right child (larger values)

    // Constructor to create a new node easily
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
private:
    Node *root; // The top node of our tree

public:
    // Constructor
    BST() {
        root = nullptr;
    }

    // Insert function without helper - uses iteration instead of recursion
    void insert(int value) {
        // Create the new node that we want to insert
        Node *newNode = new Node(value);

        // Special case: if tree is empty, new node becomes root
        if (root == nullptr) {
            root = newNode;
            return;
        }

        // Start traversing from the root to find the right spot
        Node *current = root;

        // Keep going until we find the right place and insert
        while (true) {
            // If value is smaller, we need to go left
            if (value < current->data) {
                // Check if left child exists
                if (current->left == nullptr) {
                    // Found the spot! Attach our new node here
                    current->left = newNode;
                    return; // We're done
                } else {
                    // Left child exists, so move to it and continue
                    current = current->left;
                }
            }
            // If value is larger, we need to go right
            else if (value > current->data) {
                // Check if right child exists
                if (current->right == nullptr) {
                    // Found the spot! Attach our new node here
                    current->right = newNode;
                    return; // We're done
                } else {
                    // Right child exists, so move to it and continue
                    current = current->right;
                }
            }
            // If value equals current node's data, don't insert duplicate
            else {
                delete newNode; // Clean up the node we created
                return;
            }
        }
    }

    // Search function without helper - uses iteration
    bool search(int value) {
        // Start from the root
        Node *current = root;

        // Keep searching until we find it or reach the end
        while (current != nullptr) {
            // Found it!
            if (current->data == value) {
                return true;
            }
            // Value is smaller, go left
            else if (value < current->data) {
                current = current->left;
            }
            // Value is larger, go right
            else {
                current = current->right;
            }
        }

        // We've reached a nullptr, which means value doesn't exist
        return false;
    }

    // Display function - this one still needs recursion because
    // iterative inorder traversal is more complex and less intuitive
    void display() {
        if (root == nullptr) {
            cout << "Tree is empty" << endl;
            return;
        }
        cout << "Tree elements (in sorted order): ";
        inorderTraversal(root);
        cout << endl;
    }

    // Inorder traversal helper (kept as recursive for simplicity)
    void inorderTraversal(Node *node) {
        if (node == nullptr) return;

        inorderTraversal(node->left); // Visit left subtree
        cout << node->data << " "; // Visit current node
        inorderTraversal(node->right); // Visit right subtree
    }
};

// Main function to demonstrate the BST
int main() {
    BST tree;

    // Insert some values
    cout << "Inserting values: 50, 30, 70, 20, 40, 60, 80" << endl;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    // Display the tree
    tree.display();

    // Search for values
    cout << "\nSearching for 40: " << (tree.search(40) ? "Found" : "Not found") << endl;
    cout << "Searching for 100: " << (tree.search(100) ? "Found" : "Not found") << endl;

    return 0;
}
