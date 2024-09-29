// Insertion sort in c++
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
/*
Explaination: 

1. Initial Setup:

    Start with an array and consider the first element as a sorted portion. 

2. Selecting the Key:  
   
    Take the next element (the "key") from the unsorted portion of the array. 

3. Comparing and Shifting:  
    
    Compare the key with elements in the sorted portion:
   
    ->  If the key is smaller than the compared element, shift the compared element 
        one position to the right to make space for the key.

4. Inserting the Key:
   
    Once the correct position is found (when you find an element not greater than the key), insert the key into that position.

5. Repeat:  
   
    Move to the next element in the unsorted portion and repeat the process:
   
    ->  Continue selecting keys and inserting them into their correct positions in 
        the sorted portion.

6. Continue: 
    
    Continue this process until all elements are sorted.

In Short:  

    In insertion sort, you build a sorted portion of the array by repeatedly taking 
    the next unsorted element and inserting it into the correct position within the 
    sorted portion.

    I hope you understand!
*/
