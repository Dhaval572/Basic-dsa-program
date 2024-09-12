// Insert element in sorted linked list
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

	// Inserting element in sorted linked list
	static Node *insertInSortedList(Node *head, int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr; // Because if all elements are smaller than data than it will be last Node of linked list

        // Special case: empty list or insert before head
        if (head == nullptr || data < head->data)
        {
            newNode->next = head;
            return newNode;
        }

        Node *current = head;

        while (current->next != nullptr && current->next->data < data)
        {
            current = current->next; // current incresing while(condition)
        }

        // Insert the new node
        newNode->next = current->next;
        current->next = newNode;

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

	head->data = 8;
	head->next = second; // head connected to second

	second->data = 16;
	second->next = third; // second connected to third

	third->data = 25;
	third->next = fourth; // third connected to fourth

	fourth->data = 29;
	fourth->next = nullptr; // fourth connected to null

	cout << "Before inserton: " << endl;
	Node ::traversalList(head); // Static function can call using class name

	cout << "\nAfter insertion: " << endl;
	head = Node::insertInSortedList(head,18);
	Node::traversalList(head);

	// Memory deallocation for make code optimized
	delete head;
	delete second;
	delete third;
	delete fourth;

	return 0;
}
/*
Explaination:

	In this type of insertion, You must find last element which is less than given value.

	Example : Assume that the elements of sorted linked list is bellow:

	Elements: 12,13,15,16

	Assume that you want to insert 14 in upper elements.

	So, you should to find element one by one that it is smaller than given value or bigger than given value

	check(12 < 14) { This is false So check next element}
	check(13 < 14) { This is false So check next element}
	check(15 < 14) { This is false But you found that the 15 is bigger than 14}

	So, now you should insert element after 13

	So, you can apply logic to insert element after 13

	I hope you understant!!
	
*/
