#include <iostream>
using namespace std;

// Array traversal
void display(int size, int *arr)
{
	for (int i = 0; i < size; i++)
	{
		printf("a[%d] = %d \n", i, arr[i]);
	}

	cout << endl;
}

void insertAtIndex(int size, int capacity, int *arr, int element, int index)
{
	if (size >= capacity)
	{
		cout << "Array is full, So can't any more";
		return;
	}

	// Shift elements to the right to make space for the new element
	for (int i = size; i > index; i--)
	{
		arr[i] = arr[i - 1];
	}

	arr[index] = element;
}

int main()
{
	int arr[100] = {23, 35, 67, 49};
	int size = 4, element = 87, index = 3, capacity = 100;

	cout << "Before insertion: \n";
	display(size, arr);

	insertAtIndex(size, capacity, arr, element, index);
	size++;
	cout << "After insertion: \n";
	display(size, arr);

	return 0;
}
