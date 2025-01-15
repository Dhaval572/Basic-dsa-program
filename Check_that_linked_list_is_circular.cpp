// Check that linked list is circular or not
#include <iostream>
using namespace std;

class Node
{
public:

    int data;
    Node *next;

    static bool isCycle(Node *currNode)
    {
        // If list is empty or has only one node
        if(currNode == nullptr || currNode->next == nullptr)
            return false;

        Node *ptr1 = currNode;
        Node *ptr2 = currNode;

        while(ptr2 != nullptr && ptr2 != nullptr)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next->next;

            // If both pointer meet then there is a cycle 
            if(ptr1 == ptr2)
                return true;
        }

        return false;
    }
};

int main()
{
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = nullptr;

    if(Node::isCycle(head))
        cout << "Linked list is cyclic";
    else
        cout << "Linked list is not cyclic";

    return 0;
}
