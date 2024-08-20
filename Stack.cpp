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
		arr[++top] = value;//arr[++top] because top is initialized by -1 in line 16
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
	cout << "Enter the size of stack (Size must be non-nagative): ";
	cin >> size;
	
	if(size == 0)
	{
		cout << "Size is 0, So the stack will be empty!";
		return -1;
	}
	
	if(size < 0)
	{
		cout << "Invalid size. \nSize cannot be nagative.";
		return -1;
	}
	Stack s(size);
	printf("Enter number of elements to push (Between 1 to %d): ", size);
	int n;
	cin >> n;

	if(n == 0)
	{
		cout << "the stack will be empty!";
		return -1;
	}

	if(n < 0)
	{
		printf("you cannnot enter (%d) elements in stack. Because it is nagative value.",n);
		return -1;
	}
	// Check if number of elements to push is within the stack size
	if (n > size)
	{
		cout << "Stack is greter than size of array.\n";
		return -1;
	}

	for (int i = 0; i < n; i++)// Push element
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
