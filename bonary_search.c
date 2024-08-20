// Binary search in c language
#include <stdio.h>
#include <stdlib.h>

int bSearch(int size, int *arr, int target)
{
	int low = 0, high = size - 1, mid;
	while (low <= high)
	{
		mid = ((low + high) / 2);
		if (arr[mid] == target)
		{
			printf("Target found successfully!\n");
			printf("%d is at index no. %d", target, mid);
			return 1;
		}

		if (arr[mid] < target)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	printf("Target does not found!");
	return -1;// To throw error
}

void main()
{
	int size;
	printf("Enter the size of array: ");
	scanf("%d", &size);

	if(size < 0)
	{
		printf("Invalid size. \nSize cannot be nagative.");
		return;// To throw error
	}

	if(size == 0)
	{
		printf("Size of array is 0, so the array will be empty!");
		return;// To throw error
	}
	// int arr[size];// Not recommanded (Many time throws error)
	int *arr = (int*) malloc(size * sizeof(int));

	printf("Note : Enter elements in accending order \n");
	for (int i = 0; i < size; i++)
	{
		printf("Enter (%d) element: ", i + 1);
		scanf("%d", &arr[i]);
	}

	int target;
	printf("Enter the target which you want to search: ");
	scanf("%d", &target);
	bSearch(size, arr, target);
}
/*
Note:

	->	Array starts from 0 index. 		

    ->	In binary search, element must be sorted in accending or deccending order.

	->	Time complexity of binary search is (log n).

*/
