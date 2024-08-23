// Insertion in linked list at end
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	// Linked list traversal
	static void traversalList(Node *currentEle)
	{
		cout << "Elements of list: ";

		while (currentEle != nullptr)
		{
			cout << currentEle->data << " ";    // printing data of currentElement
			currentEle = currentEle->next;	    // currentElement updating to print next element 
		}
		cout << endl;
	}

	// Insertion in linked list at end
	static Node *insertAtEnd(Node *head, int data)
	{
		Node *newEle = new Node;
		newEle->data = data;				

		Node *current = head;				

		// Moving current at last element of list
		while (current->next != nullptr)	
		{
			current = current->next;		// current updating 
		}

		current->next = newEle;				// current connected to newELe
		newEle->next = nullptr;				// newEle connected to null
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
