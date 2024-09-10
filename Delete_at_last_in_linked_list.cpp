// Deletion at the last element in linked list
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	// Traversing of linked list
	static void displayList(Node *currentNode)
	{
		cout << "Element of linked list: ";
		while (currentNode != nullptr)
		{
			cout << currentNode->data << ' '; // printing elements of linked list
			currentNode = currentNode->next;
		}
	}

	static Node *deleteAtLast(Node *head)
	{
		Node *previousNode = head;
		Node *nodeToDelete = head->next;

		while (nodeToDelete->next != nullptr)
		{
			previousNode = previousNode->next;
			nodeToDelete = nodeToDelete->next;
		}

		previousNode->next = nullptr;
		delete nodeToDelete; // Dellocate memory of deleted node
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
	Node ::displayList(head); // Static function can call using class name

	head = Node ::deleteAtLast(head);

	cout << "\nAfter insertion: " << endl;
	Node ::displayList(head);
	
	// Memory deallocation for make code optimized
	delete head;
	delete second;
	delete third;
	delete fourth;

	return 0;
}

/*
Explaination:

	Before deletion at last, List was look like below:

	[Node 1] -> [Node 2] -> [Node 3] -> [Node 4] -> NULL

	After deletion at last, List will look like below:

	[Node 1] -> [Node 2] -> [Node 3] -> NULL

	So, you can see that the last element deleted from linked list.

	So, this was deletion at the end of list.

	I hope you understand!!
*/
