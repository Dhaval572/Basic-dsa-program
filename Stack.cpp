//push and pop operation in stack
#include <iostream>
using namespace std;

class Stack
{
public:
	int size;
	int *arr;
	int top;

	// Constructor
	Stack(int s)
	{
		size = s;
		top = -1;
		arr = new int[size];
	}

	// Destructor
	~Stack()
	{
		delete[] arr; // Free the allocated memory
	}

	void printStack()
	{
		if (top == -1)
		{
			cout << "Stack is empty" << endl;
			return;
		}

		for (int i = top; i >= 0; i--)
		{
			cout << arr[i] << ' ';
		}
		cout << endl;
	}

	void push(int value)
	{
		if (top == (size - 1))
		{
			cout << "Stack is Full" << endl;
			return;
		}
		arr[++top] = value;//arr[++top] because top is initialized by -1 in line 15
	}

	void pop()
	{
		if (top == -1)
		{
			cout << "Stack is Empty" << endl;
			return;
		}
		top--;
	}

};

int main()
{
	int size;
	cout << "Enter the size of stack: ";
	cin >> size;
	Stack s(size);
	cout << "Enter number of elements to push: ";
	int element;
	cin >> element;

	// Check if number of elements to push is within the stack size
	if (element > size)
	{
		cout << "Stack is greter than size of array.\n";
		return -1;
	}

	for (int i = 0; i < element; i++)
	{
		int value;
		cout << "Enter (" << i + 1 << ") element: ";
		cin >> value;
		s.push(value);
	}

	cout << "Before pop element of stack is: ";
	s.printStack();
	s.pop();
	cout << "After pop element of stack is: ";
	s.printStack();

	return 0;
}
