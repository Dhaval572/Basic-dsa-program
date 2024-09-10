// Deletion of specific value in linked list
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
			cout << currentNode->data << ' '; // printing elements of linked list
			currentNode = currentNode->next;
		}
	}

	// Deleting the Node with a given value from the linked list
	static Node *InsertAtIndex(Node *head, int value)
	{
		Node *previousNode = head;
		Node *nodeToDelete = head->next;
		
		while(nodeToDelete->data != value && nodeToDelete->next != nullptr)
		{
			previousNode = previousNode->next;
			nodeToDelete = nodeToDelete->next; 
		}

		if(nodeToDelete->data == value)
		{
			previousNode->next = nodeToDelete->next;
			delete nodeToDelete;
		}
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

	head->data = 11;
	head->next = second; // head connected to second

	second->data = 12;
	second->next = third; // second connected to third

	third->data = 13;
	third->next = fourth; // third connected to fourth

	fourth->data = 14;
	fourth->next = nullptr; // fourth connected to null

	cout << "Before insertion: " << endl;
	Node::traversalList(head); // Static function can call using class name

	head = Node::InsertAtIndex(head, 13);
	cout << "\nAfter insertion: " << endl;
	Node::traversalList(head);

	return 0;
}
/*
Explaination:

	( Note: assume that you want to delete 13 from linked list)

	Before insertion, list was looked like below: 

	head -> [11 | next] -> [12 | next] -> [13 | next] -> [14 | next] -> NULL

	After insertion, list will looked like below:

	head -> [11 | next] -> [12 | next] -> [14 | next] -> NULL

	So, this is used to delete specific value from linked list.

	I hope you understand!!
*/
