// Quick Sort in c++
// ( Note: copy all code and paste it into vs code )
#include <iostream>
using namespace std;

// Displaying array
void display(int size, int *arr)
{
    cout << "Element of array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << endl;
}

// Partition function
int partition(int *arr, int low, int high)
{
    int pivot = arr[low]; // Setting pivot at first element
    int i = (low + 1), j = high; // setting i at second element of array and j at last element of array

    do
    {
        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot)  
        {
            j--;
        }

        if(i < j)
        {
            // Swapping arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }while(i < j);

    // Swapping arr[low] and arr[j]
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j; 
}

void quickSort(int *arr, int low, int high)
{
    int partitionIndex; // Index of pivot after partition
    if(low < high)
    {
        partitionIndex = partition(arr, low, high); 
        quickSort(arr, low, partitionIndex - 1);  // quickSort calling it self
        quickSort(arr, partitionIndex + 1, high); // quickSort calling it self
    }
}

int main()
{
    int arr[] = {23, 22, 55, 12, 67, 45, 56, 52};
    int size = (sizeof(arr) / sizeof(int));

    cout << "Before sorting: " << endl;
    display(size, arr);

    quickSort(arr, 0, size - 1);
    
    cout << "After sorting: " << endl;
    display(size, arr);

    return 0;
}

/*
QuickSort Algorithm Documentation

QuickSort is an efficient sorting algorithm that uses a divide-and-conquer approach to sort an array.

Steps:
1. Start with Given Array:
   -> [23, 22, 55, 12, 67, 45, 56, 52]

2. Choose a Pivot:
   -> Select the first element of the array as the pivot.
   -> In this case, pivot = 23.

3. Partition the Array:
   -> Rearrange elements so that:
      -> All elements less than the pivot are placed before it.
      -> All elements greater than the pivot are placed after it.
   -> Example result after partitioning:
      -> [22, 12, 23, 55, 67, 45, 56, 52]

4. Identify Pivot Position:
   -> The pivot (23) is now in its correct sorted position at index 2.

5. Recursively Sort Sub-arrays:
   -> Left sub-array: [22, 12]
   -> Right sub-array: [55, 67, 45, 56, 52]

6. Repeat the Process:
   -> For the left sub-array [22, 12]:
      -> Choose pivot = 22, resulting in [12, 22].
   -> For the right sub-array [55, 67, 45, 56, 52]:
      -> Choose pivot = 55, resulting in [45, 52, 55, 67].

7. Final Sorted Array:
   -> Combine the sorted sub-arrays and the pivot:
      -> [12, 22, 23, 45, 52, 55, 56, 67]

Visual Representation:
+--------------------------------------------------+
| Initial Array:                                   |
| [23, 22, 55, 12, 67, 45, 56, 52]                 |
|                                                  |
| Pivot = 23                                       |
|                                                  |
|       |                                          |
|       V                                          |
| After Partition:                                 |
| [22, 12, | 23 | 55, 67, 45, 56, 52]              |
+--------------------------------------------------+

Recursively sort left:              
+--------------------------------------------------+
| [22, 12]  -->  [12, 22]                          |
+--------------------------------------------------+

Recursively sort right:             
+--------------------------------------------------+
| [55, 67, 45, 56, 52]                             |
|      Pivot = 55                                  |
|                                                  |
|            |                                     |
|            V                                     |
| After Partition:                                 |
| [45, 52, | 55 | 67]                              |
+--------------------------------------------------+

Final Sorted Array:                 
+--------------------------------------------------+
| [12, 22, 23, 45, 52, 55, 56, 67]                 |
+--------------------------------------------------+

Key Points:
    
    -> Pivot Selection: Choosing a good pivot can significantly impact performance.
    
    -> Partitioning: Rearranges elements around the pivot to create smaller sub-arrays.
    
    -> Recursive Sorting: Each sub-array is sorted independently, leading to a fully sorted array.

    I hope you understand!
*/
