// Merge sort in c++
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

void merge(int *currentArr, int low, int mid, int high)
{
    int newArr[50]; // Define new array to add element in it
    int i = low;
    int j = mid + 1;
    int k = low;

    // This while loop copies lowest element from orignal array to newArr
    while(i <= mid && j <= high)
    {
        if(currentArr[i] <= currentArr[j])
        {
            newArr[k] = currentArr[i];
            i++;
            k++;
        }
        else
        {
            newArr[k] = currentArr[j];
            j++;
            k++;
        }
    }

    // Copy remaining elements from the left subarray
    while(i <= mid)
    {
        newArr[k] = currentArr[i];
        i++;
        k++;
    }

    // Copy remaining elements from the right subarray
    while(j <= high)
    {
        newArr[k] = currentArr[j];
        j++;
        k++;
    }

    // Copy the merged elements back into the original array
    for(int i = low; i <= high; i++)
    {
        currentArr[i] = newArr[i];
    }
}

// Doing actualy merge sort
void mergeSort(int *arr, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);       // Sorting left array
        mergeSort(arr, mid + 1, high);  // Sorting right array
        merge(arr, low, mid, high);     // Merging both sorted array 
    }
}

int main()
{
    int arr[] = {23, 22, 55, 12, 67, 45, 56, 52};
    int size = (sizeof(arr) / sizeof(int));

    cout << "Before sorting: " << endl;
    display(size, arr);

    mergeSort(arr, 0, (size - 1));

    cout << "After sorting: " << endl;
    display(size, arr);

    return 0;
}
/*
Explaination: 

    Merge sort works by breaking an array into two smaller parts, sorting those parts, and then putting them back together in the right order.

    Here’s a simple steps to performing merge sort:

        Divide: Split the array into two halves until each part contains a single element or is empty.

        Sort: Sort each of the smaller parts (single elements are already sorted).

        Merge: Take the sorted parts and combine them back into a single sorted array:

            ->  Compare the smallest elements of each part.
            ->  Add the smaller element to the new array.
            ->  Repeat until all elements from both parts are added.

        Repeat: Continue merging until all parts are combined into one sorted array.

    I hope you understand everything!
*/
