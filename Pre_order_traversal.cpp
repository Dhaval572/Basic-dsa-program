// Pre-order traversal in binary tree
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *left;
	Node *right;

	// Creating a new ndoe
	static Node *createNode(int data) // Static function can call using class name
	{
		Node *newNode = new Node; // Memory allocation for creating newNode;
		newNode->data = data;	  // Setting data of newNode;
		newNode->left = nullptr;  // Setting left child node to NULL
		newNode->right = nullptr; // Setting right child node to NULL
		return newNode;			  // Returning the created Node;
	}

	static void *preOrderTraversal(Node *root)
	{
		if(root != nullptr)
		{
			cout << root->data << ' ';
			preOrderTraversal(root->left);
			preOrderTraversal(root->right);
		}
	}
};

int main()
{
	Node *rootNode = Node::createNode(1);	  // Creating a rootNode
	Node *parentNode1 = Node::createNode(2); // Creating a parentNode1
	Node *parentNode2 = Node::createNode(3); // Creating a parentNode2
	Node *childNode1 = Node::createNode(4);  // Creating a childNode1
	Node *childNode2 = Node::createNode(5);  // Creating a childNode2
	Node *childNode3 = Node::createNode(6);  // Creating a childNode3

	// Linking a rootNode with left and right childNodes
	rootNode->left = parentNode1;
	rootNode->right = parentNode2;

	// Linking a parentNode1 to his child node
	parentNode1->left = childNode1;
	parentNode1->right = childNode2;

	// Linking a perentNode2 to his child node
	parentNode2->left = childNode3;

	// Static function can call using class name So not need to use object to call this function
	Node::preOrderTraversal(rootNode); // It will provide: 1 2 4 5 3 6

	return 0;
}
/*
Explaination: 

	In Pre-order traversal, we starts traversing from root.

	After traversing root, we traverse left sub-tree

	And then we traverse right sub-tree.

	So, this is steps to traverse tree in Pre-order.

	So, in this code i used recurisive function to do Pre-order traversal.

	So, below is a logic of Pre-order traversal using recursion

	void preOrderTraversal(Node *root) {
	
	    if (root != NULL) {

	        // Process the current node (visit the node)
	        print(root->data);  // Replace with actual print function

	        // Recursively traverse the left subtree
	        preOrderTraversal(root->left);

	        // Recursively traverse the right subtree
	        preOrderTraversal(root->right);
	    }
	}

	I have worked hard to make this clear and easy to understand.

	So, i hope you understand!!
*/
