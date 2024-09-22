// Creating a binary tree in c++
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

	return 0;
}
/*
Explaination:

	Here is diagram of tree which is created upperside in code.

					rootNode(27)
					/           \
			parentNode1(28)  parentNode2(29)
				/                   \
		childNode1(30)       	childNode2(31)
			/                          \
	leafNode1(32)         			leafNode2(33)

	So, you understande the code easily through this diagram

Explaination with diagram: 

	Here, the rootNode has two child node left is parentNode1 and right is parentNode2

	parentNode1 have one child node which is childNode1 and parentNode2 have also one child node which is childNode2

	childNode1 have one child node which is leafNode1 and childNode2 have also one child node which is leafNode2\

	So, leaf nodes are always last node of tree in any tree

	So, i hope you understand this diagram and code!

	In this code i made only one binary tree. So, You will see the traversal or display of the tree in the next code!

	I hope you understand everything!

*/
