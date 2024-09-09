// Insertion in linked list at first
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
			cout << currentNode->data << ' '; 	// printing data of currentNode
			currentNode = currentNode->next; 	// currentNode updating to print next 
		}
	}

	// Insertion in linked list at first
	static Node *insertAtFirst(Node *head, int data)
	{
		Node *newNode = new Node; 
		newNode->next = head; 					// newNode connected to head
		newNode->data = data; 	
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
	fourth->next = NULL; // fourth connected to null

	cout << "Before insertion: " << endl;
	Node::traversalList(head); 				// Static function can call using class name

	cout << "\nAfter insertion: " << endl;
	head = Node::insertAtFirst(head,34); 	// head updated
	Node::traversalList(head); 				// Static function can call using class name

	return 0;
}
/*
Explaination:

	Before insertion list was looked like below: 

	head -> [ 1 | next] - [ 2 | next] - [ 3 | next] - [ 4 | next] - NULL

	( Note : In this diagram [ value | pointer ]
	it means in the first box is value or data of linked list and than second box has pointer which points next node of current node )

	Before insertion list was looked like below:

	head -> [ 34 | next] - [ 1 | next] - [ 2 | next] - [ 3 | next] - [ 4 | next] - NULL

	So, you can see that in the list before insertion, first node had value (1) And after insertion first element was got value (34).

	So, I hope you understand.

( Note: In linked list, elements are known as Node )
*/
