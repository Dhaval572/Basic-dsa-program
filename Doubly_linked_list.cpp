// Creating Doubly linked list in c++
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *prev;
	Node *next;

	// Normal Traversion of Doubly linked list
	static void normalTraversal(Node *currentNode)
	{
		cout << "Element of linked list: ";
		while (currentNode != nullptr)
		{
			cout << currentNode->data << ' '; // Printing elements of linked list
			currentNode = currentNode->next;  // currentNode is updating to print the next node
		}

		cout << endl;
	}

	// Opposite Traversion of Doubly linked list
	static void oppositeTraversal(Node *lastNode)
	{
		cout << "\nElement of linked list: ";
		while (lastNode != nullptr)
		{
			cout << lastNode->data << ' '; // Printing elemenr of doubly linked list
			lastNode = lastNode->prev;     // currentNode is updating to print previous node
		}

		cout << endl;
	}
};

int main()
{
	// Memory allocation for creating Double linked list
	Node *head = new Node;
	Node *second = new Node;
	Node *third = new Node;
	Node *fourth = new Node;

	head->data = 1;
	head->next = second;  // head connected to second
	head->prev = nullptr; // head connected to null also to move back 

	second->data = 2;
	second->next = third; // second connected to third
	second->prev = head;  // second connected to head also to move back

	third->data = 3;
	third->next = fourth; // third connected to fourth
	third->prev = second; // third connected to second also to move back

	fourth->data = 4;
	fourth->next = nullptr; // fourth connected to null
	fourth->prev = third;   // fourth connected to third also to move back

	cout << "This is a normal traversal: " << endl;
	Node ::normalTraversal(head); // Static function can call using class name

	cout << "This is a opposite traversal: ";
	Node::oppositeTraversal(fourth); // Static function can call using class name

	// Memory deallocation for make code optimized
	delete head;
	delete second;
	delete third;
	delete fourth;

	return 0;
}
/*
About Doubly linked list:

	In doubly linked list, all nodes are connected to each other.

	It means the current node points to two nodes one is previous Node and second is next Node

	For example: 

	NULL <--> Node1 <--> Node2 <--> NULL

	You can see that Node1 (first node) points to null and also points to Node2 (next node)

	In this way, also Node2 points to Node1 and NULL.

	So, you can see that first and last node both are points to the NULL pointer.

	So, in simple word we can say that the Circular linked list points to two node insted of one Node.

	So, i hope you understand!!
*/
