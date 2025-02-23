// Creating linked list in c++
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

    Node ::traversalList(head); // Static function can call using class name

    // Memory deallocation
    while (head)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
/*
Explaination of linked list:

    In linked list all elements known as Node.

    Linked list is a list when all Nodes (elements) connected with his next Node (element).

    In linked list, the last Node is connects to the null.

    Structure of Linked list:

    [Node1] -> [Node2] -> [Node3] -> nullptr

    In upperside is structure of linked list when first node connected to second and second connected to third and as well as third connected to null pointer

    ( Note : we should say that first Node points to second, but for beginners, i used 'connected' word for simplicity. )

    In a linked list, we can easily insert elements compared to an array because there is no need to move other elements in the list.

Disadvantages of linked list:

    Each element needs extra memory for storing a pointer.

    Finding a specific element in a linked list is slower because you have to check 	   each one by one, unlike arrays where you can access any element directly.

*/
