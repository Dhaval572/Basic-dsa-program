// Serching target in linked list
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
			cout << currentNode->data << ' '; // Printing elements of linked list
			currentNode = currentNode->next;  // currentNode is updating to print the next node
		}
	}

	static void searchElement(Node *current, int value)
	{
		int i;
		for (i = 0; current != NULL && current->data != value; i++)
		{
			current = current->next; // current updates while target doesn't found
		}

		if (current == nullptr) // If target is not in linked list
		{
			cout << "Target doesn't found"; 
			return;
		}

		cout << "Target found at index: " << i; 
	}
};

int main()
{
	// Memory allocation for creating linked list
	Node *head = new Node;
	Node *second = new Node;
	Node *third = new Node;
	Node *fourth = new Node;

	head->data = 27;
	head->next = second; // head connected to second

	second->data = 28;
	second->next = third; // second connected to third

	third->data = 29;
	third->next = fourth; // third connected to fourth

	fourth->data = 30;
	fourth->next = nullptr; // fourth connected to null

	Node ::traversalList(head); // Static function can call using class name

	int target;
	cout << "\nEnter target which you want to found: ";
	cin >> target;

	Node::searchElement(head, target); // Static function can call using class name

	// Memory deallocation for make code optimized
	delete head;
	delete second;
	delete third;
	delete fourth;

	return 0;
}
