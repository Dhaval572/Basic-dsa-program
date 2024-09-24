// Binary search tree in-order traversal
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Creating a new node
    static Node *createNode(int data) // Static function can call using class name
    {
        Node *newNode = new Node; // Memory allocation for creating newNode;
        newNode->data = data;      // Setting data of newNode;
        newNode->left = nullptr;   // Setting left child node to NULL
        newNode->right = nullptr;  // Setting right child node to NULL
        return newNode;            // Returning the created Node;
    }
};

// Function to insert a new node in the BST
Node* insert(Node* root, int data) {
    // If the tree is empty, return a new node
    if (root == nullptr) {
        return Node::createNode(data);
    }

    // Otherwise, recur down the tree
    if (data < root->data) {
        root->left = insert(root->left, data); // Insert in left subtree
    } else {
        root->right = insert(root->right, data); // Insert in right subtree
    }

    // Return the (unchanged) node pointer
    return root;
}

// Function to perform inorder traversal of the BST
void inorderTraversal(Node* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);   // Visit left subtree
        cout << root->data << " ";      // Visit node
        inorderTraversal(root->right);  // Visit right subtree
    }
}

int main()
{
    Node *rootNode = nullptr; // Start with an empty tree

    // Creating nodes with appropriate values for a BST
    rootNode = insert(rootNode, 27);      // Creating a rootNode
    insert(rootNode, 15);                  // Creating a node with value 15
    insert(rootNode, 35);                  // Creating a node with value 35
    insert(rootNode, 10);                  // Creating a node with value 10
    insert(rootNode, 20);                  // Creating a node with value 20
    insert(rootNode, 30);                  // Creating a node with value 30
    insert(rootNode, 40);                  // Creating a node with value 40

    // Inorder traversal of the BST
    cout << "Inorder Traversal of the BST: ";
    inorderTraversal(rootNode);
    cout << endl;

    return 0;
}
/*

	This is a binary search tree example only.

	So, you all know that in binary search tree (BST), Inorder traversal is like as an ascending sorted array.

	If you don't know that what is inorder traversal, than explore my github link "https://github.com/Dhaval572/Basic-dsa-program" and search this: 'In_order_traversal.cpp'
*/
