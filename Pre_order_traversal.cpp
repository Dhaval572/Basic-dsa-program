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
	Node *rootNode = Node::createNode(27);	  // Creating a rootNode
	Node *parentNode1 = Node::createNode(28); // Creating a parentNode1
	Node *parentNode2 = Node::createNode(29); // Creating a parentNode2
	Node *childNode1 = Node::createNode(30);  // Creating a childNode1
	Node *childNode2 = Node::createNode(31);  // Creating a childNode2
	Node *leafNode1 = Node::createNode(32);	  // Creating a leafNode1
	Node *leafNode2 = Node::createNode(33);	  // Creating a leafNode1

	// Linking a rootNode with left and right childNodes
	rootNode->left = parentNode1;
	rootNode->right = parentNode2;

	// Linking a parentNodes to his child nodes
	parentNode1->left = childNode1;
	parentNode2->right = childNode2;

	// Linking a childNodes to leafNodes
	childNode1->left = leafNode1;
	childNode2->right = leafNode2;

	// Static function can call using class name So not need to use object to call this function
	Node::preOrderTraversal(rootNode);

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
