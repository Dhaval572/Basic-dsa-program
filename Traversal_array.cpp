// Creating array in c++
#include <iostream>
using namespace std;

// Traversing array
void traversalArray(int size, int *arr) 
{
	cout << "Element of array: ";
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

int main()
{
	int size;
	cout << "Enter the size of array: ";
	cin >> size;

	if(size < 0)
	{
		cout << "Invalid size.\nsize cannot be nagative.";
		return -1;
	}
	
	if(size == 0)
	{
		cout << "0 size array is not possible!";
		return  -1;
	}

	int *arr = new int[size]; // Memory allocation for creating array

	for(int i = 0; i < size; i++)
	{
		printf("Enter (%d) element: ",i + 1);
		cin >> arr[i];
	}

	traversalArray(size,arr);
	return 0;
}

/*

About array data structure:

	Array is a collection of similar data type.

	Syntax of array declaration:

			data_type array_name[array_size];

		Example:
			
			int arr[10];

	Syntax of initialization of array (Initialization when declaration):

			data_type array_name[array_size] = {first element, second element ... last element};

	Array is a linear data structure.

	Array starts from 0 index.

*/
