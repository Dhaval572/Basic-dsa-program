//enqueue and dequeue operation in Queue data structure
#include <iostream>
using namespace std;

class Queue
{
public:
	int *arr, size, rear, front;
	Queue(int s)
	{
		size = s;
		rear = -1;
		front = -1;
		arr = new int[size];
	}

	~Queue()
	{
		delete[] arr; // free the allocated memory
	}

	void printQue()
	{
		if (rear == -1 && front == -1)
		{
			cout << "Queue is empty!";
		}

		for (int i = front; i < rear + 1; i++)
		{
			cout << arr[i] << ' ';
		}

	}

	void enqueue(int value)
	{
		if (rear == (size - 1))
		{
			cout << "Queue is full\n";
			return;
		}
		if (rear == -1 && front == -1)
		{
			rear = 0;
			front = 0;
		}
		else
		{
			rear++;
		}
		arr[rear] = value;
	}

	void dequeue()
	{
		if (rear == -1 && front == -1)
		{
			cout << "Queue is empty!";
		}
		else if (front == rear)
		{
			front--;
			rear--;
		}
		else
		{
			front++;
		}
	}
};

int main()
{
	int size;
	cout << "Enter the size of Queue: ";
	cin >> size;
	Queue s(size);
	cout << "Enter number of elements to enqueue: ";
	int element;
	cin >> element;

	// Check if number of elements to enqueue is within the Queue size
	if (element > size)
	{
		cout << "Queue is greter than size of array.\n";
		return -1;
	}

	for (int i = 0; i < element; i++)
	{
		int value;
		cout << "Enter (" << i + 1 << ") element: ";
		cin >> value;
		s.enqueue(value);
	}

	cout << "Before dequeue element of Queue is: ";
	s.printQue();
	cout << endl;
	s.dequeue();
	cout << "After dequeue element of Queue is: ";
	s.printQue();
	
	return 0;
}
