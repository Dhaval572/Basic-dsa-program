// Deletion at index in linked list
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

    // Deleting the Node at a given index from the linked list
    static Node *InsertAtIndex(Node *head, int index)
    {
        Node *p = head;
        Node *q = head->next;
        
        for (int i = 0; i < (index - 1); i++)
        {
            p = p->next;
            q = q->next;
        }
        
        p->next = q->next;
        delete q;
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
    Node ::traversalList(head); // Static function can call using class name

    head = Node::InsertAtIndex(head,2);
    cout << "\nAfter insertion: " << endl;
    Node::traversalList(head);

    return 0;
}
