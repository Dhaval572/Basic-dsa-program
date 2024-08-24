// Insertion in linked list at index
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
		cout << "Element of linked list: ";
		while (currentNode != nullptr) 
		{
			cout << currentNode->data << ' '; // printing data of currentNode
			currentNode = currentNode->next;  // currentNode updating to print next Node
		}
	}

	// Insertion in linked list at index
	static Node *insertAtIndex(Node *head, int index, int data)
	{
		Node *newNode = new Node;
		Node *current = head;			// set current at first Node of list	

		// Special case: Inserting at index 0 (beginning of the list)
		if (index == 0)
		{
			newNode->next = head; 	// newNode connected to head
			newNode->data = data;	
			return newNode;
		}

		for (int i = 0; i != (index - 1); i++)   
		{
			current = current->next;	// current Node updates 
		}
		
		newNode->data = data;
		newNode->next = current->next;	// newNode connected to current Node's next Node 
		current->next = newNode;		// current connected to newNode
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
	fourth->next = nullptr; // fourth connected to null

	cout << "Before insertion: " << endl;
	Node::traversalList(head); // Static function can call using class name

	cout << "\nAfter insertion: " << endl;
	head = Node::insertAtIndex(head, 2, 45); // head updated
	Node::traversalList(head);	 // Static function can call using class name

	return 0;
}

/*
	Note : index and Node both are different
	Index is index of Linked list. 
	Node is element of linked list
	And also insert after node and insert at index both are different.
*/ 
