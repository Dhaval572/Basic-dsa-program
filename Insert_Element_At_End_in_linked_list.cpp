// Insertion in linked list at end
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	// Linked list traversal
	static void traversalList(Node *currentNode)
	{
		cout << "Elements of list: ";

		while (currentNode != nullptr)
		{
			cout << currentNode->data << " "; // printing data of currentNode
			currentNode = currentNode->next;  // currentNode updating to print next Node
		}
		cout << endl;
	}

	// Insertion in linked list at end
	static Node *insertAtEnd(Node *head, int data)
	{
		Node *newNode = new Node;
		newNode->data = data;				

		Node *current = head;				// Set current at first Node

		// Moving current at last Node of list
		while (current->next != nullptr)	
		{
			current = current->next;		// current updating 
		}

		current->next = newNode;			// current connected to newNode
		newNode->next = nullptr;			// newNode connected to null
		return head;
	}
};

int main()
{
	// Memory allocation for creating linked list
	Node *head = new Node;
	Node *second = new Node;
	Node *third = new Node;

	head->data = 1;
	head->next = second; // head connected to second

	second->data = 2;
	second->next = third; // second connected to third

	third->data = 3;
	third->next = nullptr; // third connected to null

	cout << "Before insertion: " << endl;
	Node::traversalList(head);				// Static function can call using class name

	head = Node::insertAtEnd(head, 35);		// head updated

	cout << "After insertion: " << endl;
	Node::traversalList(head);				// Static function can call using class name
	return 0;
}
