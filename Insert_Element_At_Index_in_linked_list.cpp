// Insertion in linked list at index
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	// Traversing of linked list
	static void traversalList(Node *currentEle)
	{
		cout << "Element of linked list: ";
		while (currentEle != NULL) 				// You can also use nullptr instead of NULL
		{
			cout << currentEle->data << ' '; 	// printing data of current element
			currentEle = currentEle->next;		// currentEle updating to print next element
		}
	}

	// Insertion in linked list at index
	static Node *insertAtIndex(Node *head, int index, int data)
	{
		Node *newElement = new Node;
		Node *current = head;				

		// Special case: Inserting at index 0 (beginning of the list)
		if (index == 0)
		{
			newElement->next = head; 	// newElement connected to head
			newElement->data = data;	
			return newElement;
		}

		for (int i = 0; i != (index - 1); i++)   
		{
			current = current->next;			// current Node updates 
		}
		newElement->data = data;
		newElement->next = current->next;		// newElement connected to current
		current->next = newElement;				// current connected to newNode
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
	fourth->next = NULL; // fourth connected to null

	cout << "Before insertion: " << endl;
	Node::traversalList(head); // Static function can call using class name

	cout << "\nAfter insertion: " << endl;
	head = Node::insertAtIndex(head, 3, 45); // head updated
	Node::traversalList(head);	 // Static function can call using class name
	return 0;
}
