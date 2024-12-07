// Deletion at index in array
#include <iostream>
using namespace std;

void deleteAtIndex(int *arr, int &size, int index)
{
    // Shift elements to the left to fill the gap created by deletion
    for (int i = index; i < size - 1; ++i)
    {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    size--;
}

int main()
{
    int arr[6] = {1, 2, 3, 4}; // Array with initial size 4, we are going to remove 1 element
    int size = 4;              // Current number of elements in the array
    int index = 2;             // Index where we want to delete
    // No need for value here since we're deleting

    deleteAtIndex(arr, size, index);

    // Print the updated array
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
