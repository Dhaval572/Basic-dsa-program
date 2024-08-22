// Creating linked list in c++
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	// Traversing of linked list
	static void traversalList(Node *currentElement)
	{
		cout << "Element of linked list: ";
		while (currentElement != NULL)
		{
			cout << currentElement->data << ' ';   // printing elements of linked list
			currentElement = currentElement->next; 
		}
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

	Node ::traversalList(head); // Static function can call using class name

	// Memory deallocation for make code optimized
    delete head;
    delete second;
    delete third;
    delete fourth;

	return 0;
}
/*
Explaination of linked list:

	Linked list is a list when all elements connected with his next element.

	In linked list, the last elements is connects to the null.

	In a linked list, we can easily insert elements compared to an array because there is no need to move other elements in the list.

Disadvantages of linked list:

	Each element needs extra memory for storing a pointer.

	Finding a specific element in a linked list is slower because you have to check 	   each one by one, unlike arrays where you can access any element directly.

*/
