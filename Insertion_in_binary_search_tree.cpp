// Insertion in binary search tree
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *left;
	Node *right;

	// Creating a new node
	static Node *createNode(int data)
	{
		Node *newNode = new Node;
		newNode->data = data;
		newNode->left = nullptr;
		newNode->right = nullptr;
		return newNode;
	}

	// In-order traversal of the tree
	static void inOrderTraversal(Node *root)
	{
		if (root != nullptr)
		{
			inOrderTraversal(root->left);
			cout << root->data << ' ';
			inOrderTraversal(root->right);
		}
	}

	// Insert a new value into the BST
	static void insert(Node *&rootNode, int data)
	{
		if (rootNode == nullptr) // Special case: If tree has only one node 
		{
			rootNode = createNode(data); // Insertion as rootNode
			return;
		}

		if (data < rootNode->data) // If data is less than rootNode's data
		{
			insert(rootNode->left, data); // Insert in left node
		}
		else if (data > rootNode->data) // If data is greter than rootNode's data
		{
			insert(rootNode->right, data); // Insert in right Node
		}
		else
		{
			cout << "Duplicate value is not allowed!" << endl; 
		}
	}
};

int main()
{
	// Creation of Node of binary search tree
	Node *rootNode = Node::createNode(27); 
	Node *parentNode1 = Node::createNode(25);
	Node *parentNode2 = Node::createNode(30);
	Node *childNode1 = Node::createNode(28);
	Node *childNode2 = Node::createNode(35);
	Node *leafNode1 = Node::createNode(26);
	Node *leafNode2 = Node::createNode(32);

	// Constructing the initial BST
	rootNode->left = parentNode1;
	rootNode->right = parentNode2;
	parentNode1->right = leafNode1;
	parentNode2->left = childNode1;
	parentNode2->right = childNode2;
	childNode2->left = leafNode2;

	cout << "Before insertion: ";
	Node::inOrderTraversal(rootNode);

	int val;
	cout << "\nEnter the value to insert in BST: ";
	cin >> val;

	// Inserting a new node
	cout << "After insertion: ";
	Node::insert(rootNode, val);
	Node::inOrderTraversal(rootNode);

	return 0;
}
/*
Explaination:

	In BST, if you want to insert value than you must check that the value which you want to insert in BST is greter than root node or less than root node

	If the insertion value is greter than root node than insert in right sub-tree 

	If the insertion value is less than root node than insert in left sub-tree 

	So, this is basic understanding to insert value in BST.

	In my code i used recursive function, You can also do this using loops.

	So, i hope you understand!
*/
