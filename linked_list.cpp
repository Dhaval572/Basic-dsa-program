// Creating linked list in c++
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	// Traversing of linked list
	static void traversalList(Node *ptr)
	{
		while (ptr != NULL)
		{
			cout << "Element: " << ptr->data << endl;
			ptr = ptr->next;
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

	return 0;
}
