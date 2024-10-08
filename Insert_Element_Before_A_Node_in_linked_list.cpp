// Insertion in linked list before a node
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
		cout << "Element of List: ";			
		while (currentNode != nullptr)
		{
			cout << currentNode->data << " ";	// printing data of currenNode
			currentNode = currentNode->next;	// currentNode updating to print next Node
		}
	}

	// Insertion in linked list before a node
	static Node *insertBeforeNode(Node *head, Node *node, int data)
	{
		Node *newNode = new Node;
		newNode->data = data;					
		
		Node *current = head;
		while(current->next != node) 
		{
			current = current->next;
		}

		current->next = newNode;
		newNode->next = node;
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
	fourth->next = nullptr; // third connected to null

	cout << "Before insertion: " << endl;
	Node::traversalList(head);				// Static function can call using class name

	head = Node::insertBeforeNode(head, second, 35); // head updated

	cout << "\nAfter insertion: " << endl;	// Static function can call using class name
	Node::traversalList(head);

	return 0;
}
/*
Explaination: 

	Before insrtion, linked list was looked like below: 

	head -> [1 | next] -> [2 | next] -> [3 | next] -> [4 | next] -> NULL

	(Note: assume that we want to insert 35 before second node)

	After insertion, linked list will look like: 

	head -> [1 | next] -> [35 | next] -> [2 | next] -> [3 | next] -> [4 | next] -> NULL

	So, i hope you understand!!
*/
