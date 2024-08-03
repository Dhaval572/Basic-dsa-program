//Binary search
#include <stdio.h>

int bSearch(int n,int *arr, int target)
{
	int low = 0,high = n-1,mid;
	while (low <= high)
	{
		mid = ((low + high)/2);
		if(arr[mid] == target)
		{
			printf("Target found successfully!\n");
			printf("%d is at index no. %d",target,mid);
			return 1;
		}

		if(arr[mid] < target)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	printf("Target does not found!");
	return -1;
}

void main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];
	for(int i = 0;i < n;i++)
	{
		printf("Enter (%d) element: ",i + 1);
		scanf("%d",&arr[i]);
	}

	int target;
	printf("Enter the target which you want to search: ");
	scanf("%d",&target);
	bSearch(n,arr,target);
}
