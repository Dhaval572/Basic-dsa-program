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

// Insertion sort
void insertionSort(int size, int *arr)
{
    int key, i, j;

    // Number of passes
    for (int i = 1; i <= (size - 1); i++)
    {
        key = arr[i];   // The element to be inserted in the sorted portion
        j = i - 1;      // Index of the last element in the sorted portion

        // Loop for each pass
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // Move element one position to the right 
            j--;                 // Move to the left in the sorted portion
        }

        arr[j + 1] = key; // Insert key at it's correct position
    }
}

int main()
{
    int arr[] = {23, 2, 55, 12, 88, 45, 56, 57};
    int size = (sizeof(arr) / sizeof(int));

    cout << "Before sorting: " << endl;
    display(size, arr);

    insertionSort(size, arr);

    cout << "After sorting: " << endl;
    display(size, arr);
    return 0;
}
