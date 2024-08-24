// Insertion in linked list after a node
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	// Traversing of linked list
	static void traversalList(Node *currentNode)
	{
		cout << "Element of List: ";			
		while (currentNode != nullptr)
		{
			cout << currentNode->data << " ";	// printing data of currenNode
			currentNode = currentNode->next;	// currentNode updating to print next Node
		}
	}

	// Insertion in linked list after a node
	static Node *insertAfterNode(Node *head, Node *previousNode, int data)
	{
		Node *newNode = new Node;
		newNode->data = data;					

		newNode->next = previousNode->next;	// newNode connected to previous node's next 
		previousNode->next = newNode; 		// previous Node connected to newNode

		return head;
	}
};

int main()
{
	// Memory allocation for creating linked list
	Node *head = new Node;
	Node *second = new Node;
	Node *third = new Node;
	Node *fourth = new Node;

	head->data = 1;
	head->next = second; // head connected to second

	second->data = 2;
	second->next = third; // second connected to third

	third->data = 3;
	third->next = fourth; // third connected to fourth

	fourth->data = 4;
	fourth->next = nullptr; // third connected to null

	cout << "Before insertion: " << endl;
	Node::traversalList(head);				// Static function can call using class name

	head = Node::insertAfterNode(head, second, 35); // head updated

	cout << "\nAfter insertion: " << endl;	// Static function can call using class name
	Node::traversalList(head);

	return 0;
}
/*
	Note : index and Node both are different
	Index is index of Linked list. 
	Node is element of linked list
	And also insert after node and insert at index both are different.
*/ 
