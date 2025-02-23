// Rotate the linked list
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    static Node *rotate(Node *head, int k)
    {
        if (!head || !head->next || k == 0)
            return head; // Return current linked list

        int size = Node::sizeOfList(head);
        k = k % size; // Optimize the k

        if (k == 0)
            return head;

        // Find new head and tail
        Node *newTail = head;

        for (int i = 0; i < (size - k - 1); i++)
            newTail = newTail->next;

        Node *newHead = newTail->next;

        // Arrange rotated linked list
        Node *tail = newHead;

        while (tail->next) // while tail->next != nullptr
            tail = tail->next;

        tail->next = head;
        newTail->next = nullptr;

        return newHead;
    }

    static void traversalList(Node *currentNode)
    {
        cout << "Element of linked list: ";
        while (currentNode != nullptr)
        {
            cout << currentNode->data << ' ';
            currentNode = currentNode->next;
        }

        cout << endl;
    }

    static int sizeOfList(Node *currNode)
    {
        int count = 0;

        while (currNode != nullptr)
        {
            count++;
            currNode = currNode->next;
        }

        return count;
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
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = nullptr;

    cout << "Original LinkedList: " << endl;
    Node ::traversalList(head);

    int k = 2;
    head = Node::rotate(head, k);

    cout << "Rotated LinkedList: " << endl;
    Node ::traversalList(head);

    // Memory deallocation
    while (head)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
