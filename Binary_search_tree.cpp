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

	static void *inOrderTraversal(Node *root)
	{
		if (root != nullptr)
		{
			inOrderTraversal(root->left);
			cout << root->data << ' ';
			inOrderTraversal(root->right);
		}
	}
};

int main()
{
    Node *rootNode = Node::createNode(27);      // Creating a rootNode
    Node *parentNode1 = Node::createNode(25);   // Creating a parentNode1
    Node *parentNode2 = Node::createNode(30);   // Creating a parentNode2
    Node *childNode1 = Node::createNode(28);    // Creating a childNode1
    Node *childNode2 = Node::createNode(35);    // Creating a childNode2
    Node *leafNode1 = Node::createNode(26);      // Creating a leafNode1
    Node *leafNode2 = Node::createNode(32);      // Creating a leafNode2

    // Linking a rootNode with left and right childNodes
    rootNode->left = parentNode1;
    rootNode->right = parentNode2;

    // Linking a parentNodes to his child nodes
    parentNode1->right = leafNode1; 
    parentNode2->left = childNode1;  
    parentNode2->right = childNode2; 

    // Linking a childNodes to leafNodes
    childNode2->left = leafNode2; 
    childNode1->left = nullptr;  
    childNode1->right = nullptr;  
    childNode2->right = nullptr; 

	cout << "Inorder traversal of binary search tree: ";
	Node::inOrderTraversal(rootNode); 

    return 0;
}
/*

	This is a binary search tree example only.

	So, you all know that in binary search tree (BST), Inorder traversal is like as an ascending sorted array.

	If you don't know that what is inorder traversal, than explore my github link "https://github.com/Dhaval572/Basic-dsa-program" and find this file: 'Traversal_in_binary_tree.cpp'

*/
