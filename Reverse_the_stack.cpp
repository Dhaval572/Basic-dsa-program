// Reverse the stack elements using recursion
#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int element)
{
    // if the stack is empty, push the element
    if (s.empty())
    {
        s.push(element);
        return;
    }

    int top = s.top(); 
    s.pop(); // Updates the top 

    insertAtBottom(s, element); 
    s.push(top);
}

void reverseStack(stack<int> &s)
{
    // if the stack is empty, return
    if (s.empty())
    {
        return;
    }

    int top = s.top();
    s.pop();

    reverseStack(s);
    
    insertAtBottom(s, top);
}

void traverseTheStack(stack<int> &s)
{
    stack<int> temp = s;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << endl;
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "Original stack: ";
    traverseTheStack(s);
    
    reverseStack(s);

    cout << "Reversed stack: ";
    traverseTheStack(s);

    return 0;
}
