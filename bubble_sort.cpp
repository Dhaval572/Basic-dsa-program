// Bubblesort in c++
#include <iostream>
using namespace std;

// Traversion of array
void printArray(int size, int *arr)
{
	cout << "Element of array is: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}

	cout << endl;
}

void bubbleSort(int size, int *arr)
{
	for (int i = 0; i < (size - 1); i++) // Number of passes
	{
		for (int j = 0; j < (size - 1 - i); j++) // Comparison in each pass
		{
			if (arr[j] > arr[j + 1])
			{
				// Swapping current element and next element like 56 and 23 to 23 and 56
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

				// (Note : you can also use c++ in built swap function like as below)
				// swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main()
{
	int arr[] = {23, 56, 36, 24, 68, 35};
	int size = sizeof(arr) / sizeof(int);

	cout << "Before sorting: " << endl;
	printArray(size, arr);
	bubbleSort(size, arr);

	cout << "\nAfter sorting: " << endl;
	printArray(size, arr);
	return 0;
}
/*
Explaination:

	In bubble sort, If the first item in the pair is greater than the second item, they are swapped.

	For example : 34 > 32 So, it must swap means 34 must go to last like 32, 34.

	Here are simple diagram to understand bubble sort:

	Initial List:       [5, 3, 8, 4, 2]

	Pass 1:            [3, 5, 8, 4, 2]   (5 and 3 swapped)
					   [3, 5, 8, 4, 2]
					   [3, 5, 4, 8, 2]   (8 and 4 swapped)
					   [3, 5, 4, 2, 8]   (8 and 2 swapped)

	Pass 2:            [3, 5, 4, 2, 8]   (8 is in correct place)
					   [3, 4, 5, 2, 8]   (5 and 4 swapped)
					   [3, 4, 2, 5, 8]   (5 and 2 swapped)

	Pass 3:            [3, 4, 2, 5, 8]   (5 is in correct place)
					   [3, 2, 4, 5, 8]   (4 and 2 swapped)

	Pass 4:            [2, 3, 4, 5, 8]   (3 and 2 swapped)

	Final Sorted List: [2, 3, 4, 5, 8]

	I hope you understand!!
*/
