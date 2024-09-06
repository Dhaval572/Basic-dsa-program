// Deletion at the first element in linked list
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

    // Deletion at first in linked list
    static Node *deleteFrist(Node *head)
    {
        Node *nodeTODelete = head;
        head = head->next;                          // Move the head to the next node
        delete nodeTODelete;                      // clear memory of first node for reuse
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

    cout << "Before deletion: " << endl;
    Node::traversalList(head);

    head = Node::deleteFrist(head); // head updated
    cout << "\nAfter deletion: " << endl;
    Node::traversalList(head);

    return 0;
}
/*
Explaination: 

    Before deletion the linked list will look like that: 
    head -> [Node 1] -> [Node 2] -> [Node 3] -> [Node 4]

    After deleting the first node, the linked list looks like this:
    head -> [Node 2] -> [Node 3] -> [Node 4]

    It means the first node of the linked list is deleted, and its memory is freed up.
*/
