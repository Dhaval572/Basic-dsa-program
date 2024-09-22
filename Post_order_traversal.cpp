// Post-order traversal in binary tree
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

	static void *postOrderTraversal(Node *root)
	{
		if (root != nullptr)
		{
			postOrderTraversal(root->left);
			postOrderTraversal(root->right);
			cout << root->data << ' ';
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
	Node::postOrderTraversal(rootNode);

	return 0;
}
/*
Explaination:

	In Post-order traversal, we starts traversing from left sub-tree.

	After traversing left sub-tree, we traverse right sub-tree

	And then we traverse root.

	So, this is steps to traverse tree in Post-order.

	So, in this code i used recurisive function to do Post-order traversal.

	So, below is a logic of Post-order traversal using recursion

	
	void postOrderTraversal(Node *root) {
	    // Step 1: Check if the current node is NULL
	    if (root == NULL) {
	        return;  // If it is NULL, there is nothing to process
	    }

	    // Step 2: Recursively traverse the left subtree
	    postOrderTraversal(root->left);

	    // Step 3: Recursively traverse the right subtree
	    postOrderTraversal(root->right);

	    // Step 4: Process the current node
	    print(root->data);  
	}

	I have worked hard to make this clear and easy to understand.

	So, i hope you understand!!
*/
