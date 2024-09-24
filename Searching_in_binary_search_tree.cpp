// Search element in binary search tree
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
		newNode->data = data;	  // Setting data of newNode;
		newNode->left = nullptr;  // Setting left child node to nullptr
		newNode->right = nullptr; // Setting right child node to nullptr
		return newNode;			  // Returning the created Node;
	}

	static void inOrderTraversal(Node *root)
	{
		if (root != nullptr)
		{
			inOrderTraversal(root->left);
			cout << root->data << ' ';
			inOrderTraversal(root->right);
		}
	}

	static Node *search(Node *rootNode, int Target)
	{
		if (rootNode == nullptr)
		{
			return nullptr;
		}
		if (Target == rootNode->data)
		{
			return rootNode;
		}
		else if (Target < rootNode->data)
		{
			return search(rootNode->left, Target);
		}
		else
		{
			return search(rootNode->right, Target);
		}
	}
};

int main()
{
	Node *rootNode = Node::createNode(27);	  // Creating a rootNode
	Node *parentNode1 = Node::createNode(25); // Creating a parentNode1
	Node *parentNode2 = Node::createNode(30); // Creating a parentNode2
	Node *childNode1 = Node::createNode(28);  // Creating a childNode1
	Node *childNode2 = Node::createNode(35);  // Creating a childNode2
	Node *leafNode1 = Node::createNode(26);	  // Creating a leafNode1
	Node *leafNode2 = Node::createNode(32);	  // Creating a leafNode2

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
	cout << endl;

	Node *searchResult = Node::search(rootNode, 28);
	if (searchResult != nullptr)
	{
		cout << "Node found with value: " << searchResult->data << endl;
	}
	else
	{
		cout << "Node not found." << endl;
	}

	return 0;
}

/*
Explaination searching in BST: 

	      27
         /  \
       25    30
       / \     \
     26   28   35
               /
             32

	Searching for 28:

	Start at 27: 40 > 27 → Move to 30.
	Now at 30:   40 > 30 → Move to 35.
	Now at 35:   40 > 35 → Move to nullptr.

	So, if you want to more explaination than go to this link: "https://youtu.be/OKXI2woGoeg?list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi".

	I hope you understand!
*/
