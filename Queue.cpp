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
			return;
		}

		for (int i = front; i < rear + 1; i++)
		{
			cout << arr[i] << ' ';
		}

	}

	void enQueue(int value)
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
			return;
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
	cout << "Enter the size of Queue(Must be non-nagative): ";
	cin >> size;

	if(size < 0)
	{
		cout << "Invalid size. Enter a non-nagative size of Queue.";
		return -1;
	}

	if(size == 0)
	{
		cout << "Size of Queue is 0, So the Queue will be empty";
		return -1;
	}
	Queue s(size);
	cout << "Enter number of elements to enqueue: ";
	int n;
	cin >> n;

	// Check if number of elements to enqueue is within the Queue size
	if (n > size)
	{
		cout << "Queue is greter than size of array.\n";
		return -1;
	}

	for (int i = 0; i < n; i++)
	{
		int value;
		cout << "Enter (" << i + 1 << ") element: ";
		cin >> value;
		s.enQueue(value);
	}

	cout << "Before dequeue element of Queue is: ";
	s.printQue();
	cout << endl;
	s.dequeue();
	cout << "After dequeue element of Queue is: ";
	s.printQue();
	
	return 0;
}
