// Insertion at first Node in Circular linked list
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	// Traversing of Circular linked list
	static void traversalList(Node *head)
	{
		cout << "Element of linked list: ";
		Node *current = head;
		do
		{
			cout << current->data << ' '; // Printing elements of linked list
			current = current->next;
		} while (current != head);

		cout << endl;
	}

	// Inserting element at head 
	static Node *insertAtFirst(Node *head, int data)
	{
		Node *newNode = new Node;
		newNode->data = data; // Setting data of newNode

		Node *current = head;
		while (current->next != head)
		{
			current = current->next; // current updating
		}

		// At this point current is connected to the last node of the circular linked list
		current->next = newNode; // current connected to newNode
		newNode->next = head;	 // newNode connected to head
		return newNode;			 // newNode becomes the new head
	}
};

int main()
{
	// Memory allocation for creating Circular linked list
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
	fourth->next = head; // fourth connected to null

	cout << "Before insertion: " << endl;
	Node::traversalList(head); // Static function can call using class name

	head = Node::insertAtFirst(head, 50); // head updating

	cout << "\nAfter insertion: " << endl;
	Node::traversalList(head); // Static function can call using class name

	return 0;
}
/*
Explaination: 

	In Circular linked list insrtion operation is similar to normal linked list.

	So, it has not more difference between normal linked list insertion and Circular linked list insertion.

	Before insertion list was looked like below: 

	head -> [ 1 | next] - [ 2 | next] - [ 3 | next] - [ 4 | next] - NULL

	Aefore insertion list will look like below:

	head -> [ 34 | next] - [ 1 | next] - [ 2 | next] - [ 3 | next] - [ 4 | next] - NULL

	I hope you understand.
*/
