// enqueue and dequeue operation in Circular Queue
#include <iostream>
using namespace std;

class CircleQueue
{
private:
	int front;
	int rear;
	int size;
	int *arr;

public:
	// Constructor
	CircleQueue(int queueSize)
	{
		size = queueSize;
		arr = new int[size]; // Allocate memory for the queue
		front = -1;
		rear = -1;
	}

	// Destructor
	~CircleQueue()
	{
		delete[] arr; // Free the allocated memory
	}

	// Print all elements in the queue
	void printQueue()
	{
		if (front == -1)
		{
			cout << "Queue is empty, cannot print" << endl;
			return;
		}

		// Print elements from front to rear
		int i = front;
		while (true)  // this is infinite loop
		{
			cout << arr[i] << ' ';
			if (i == rear)
				break; // Exit from the infinite loop if we're at the rear
			i = (i + 1) % size;
		}
		cout << endl;
	}

	// Add an element to the queue
	void enQueue(int value)
	{
		// Check if the queue is full in Circular Queue method
		if ((rear + 1) % size == front)
		{
			cout << "Queue is full" << endl;
			return;
		}

		if (front == -1) 
		{
			front = 0;
		}
		rear = (rear + 1) % size; // Move rear to the next index
		arr[rear] = value;
	}

	// Remove an element from the queue
	void deQueue()
	{
		if (front == -1) 
		{
			cout << "Queue is empty" << endl;
			return;
		}

		if (front == rear) // Only one element was in the queue
		{
			front = -1;
			rear = -1;
		}
		else
		{
			front = (front + 1) % size; // Move front to the next index
		}
	}
};

int main()
{
	CircleQueue q(5); // Create a queue with size 5

	// Enqueue elements
	q.enQueue(10);
	q.enQueue(20);
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);

	cout << "Queue after enqueuing elements: ";
	q.printQueue();

	// Dequeue some elements from the queue
	q.deQueue();
	q.deQueue();

	cout << "Queue after dequeuing elements: ";
	q.printQueue();

	// Add more elements to the queue
	q.enQueue(60);
	q.enQueue(70);

	cout << "Queue after adding more elements: ";
	q.printQueue();

	return 0;
}
