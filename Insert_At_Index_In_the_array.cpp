// Insert at index in array
#include <iostream>
using namespace std;

void insertAtIndex(int *arr, int &size, int index, int value)
{
	// Shift elements to the right to make space for the new value
	for (int i = size; i > index; --i)
	{
		arr[i] = arr[i - 1]; 
	}

	// Insert the new value at the specified index
	arr[index] = value;

	// Increase the size of the array
	size++;
}

int main()
{
	int arr[6] = {1, 2, 3, 4, 0}; // Array with initial size 5, we are going to add 1 element
	int size = 4;				  // Current number of elements in the array
	int index = 2;				  // Index where we want to insert
	int value = 99;				  // Value to insert

	insertAtIndex(arr, size, index, value);

	// Print the updated array
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
/* 
Explaination: 

	Dry run the code : 

		Line no. 8 to 11	

			First iteration:

				[1, 2, 3, 4, 4]

			Second iteration:

				[1, 2, 3, 3, 4]

		Line no. 14

				[1, 2, 99, 3, 4]

	So, this was very simple dry run of code logic.
*/
