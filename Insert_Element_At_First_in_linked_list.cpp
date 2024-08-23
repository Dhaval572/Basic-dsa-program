// Insertion in linked list at first
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
			cout << currentElement->data << ' '; 	// printing data of currentElement
			currentElement = currentElement->next; 	// currentElement updating to print next element
		}
	}

	// Insertion in linked list at first
	static Node *insertAtFirst(Node *head, int data)
	{
		Node *newElement = new Node; 
		newElement->next = head; 					// newElement connected to head
		newElement->data = data; 	
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

	// Memory dellocation for make code optimized
	delete head;
    delete second;
    delete third;
    delete fourth;

	return 0;
}
