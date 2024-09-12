// Creating Circular linked list in c++
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
		Node *current = head; // current node connected to head
		do
		{
			cout << current->data << ' '; // Printing elements of linked list
			current = current->next; // current updates to print next Node of Circular linked list
		} while (current != head); 
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

	Node ::traversalList(head); // Static function can call using class name

	// Memory deallocation for make code optimized
	delete head;
	delete second;
	delete third;
	delete fourth;

	return 0;
}
/*
Explaination:

	In Circular linked list, the last elements is connected to head Node.

	This is main difference between Normal linked list and Circular linked list.

	Here are simple diagram of circular linked list: 

         +----+     +----+     +----+     +----+
    head | 10 | --> | 20 | --> | 30 | --> | 40 | 
         +----+     +----+     +----+     +----+
           ^                                 |
           |                                 |
           +---------------------------------+

	In this diagram you can see easly that last node is connected to head.

	So, this is main difference ...

Advantage of circular linked list: 

=>	Once you reach the end of the list, you can easily return to the 
	beginning and continue traversing.

=>	Ideal for tasks like round-robin scheduling

So, this was explaination of circular linked list and some advantages of circular linked list.

So, i hope you understand!!

*/
