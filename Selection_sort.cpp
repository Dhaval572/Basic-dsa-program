// Selection sort in c++
#include <iostream>
using namespace std;

void selectionSort(int size, int *arr)
{
    int indexOfMin;
    for (int i = 0; i < size - 1; i++) // Number of passes
    {
        indexOfMin = i; // Assume that indexOfMin is 0
        for (int j = i + 1; j < size; j++) // 
        {
            if (arr[j] < arr[indexOfMin]) 
            {
                indexOfMin = j;
            }
        }

        // Swaping A[i] into A[indexOfMin]
        int temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}

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

int main()
{
    int arr[] = {34, 36, 24, 57, 76, 49, 12, 46};
    int size = (sizeof(arr) / sizeof(int)); // Finding that how many elements are in array

    cout << "Before sorting: " << endl;
    display(size, arr);

    selectionSort(size, arr);
    cout << "After sorting: " << endl;
    display(size, arr);
    return 0;
}
/*
Explaination:

1. Initial Setup:  
        
        Start with an array, and assume the first element is the minimum.

2. Finding the Minimum:  
        
        Compare this assumed minimum with all the other elements in the array:
   
            ->  If you find a smaller element, update your minimum to this new value.

3. Swapping:  
        
        After checking all elements:
   
            ->  If a smaller element was found than swap it with the first element.

4. Repeat:  
   
        Move to the next position in the array and repeat the process:
    
            ->  Assume the next element is the minimum and compare it with 
                the rest of the unsorted elements.

5. Continue:  
   
        Continue this process until the entire array is sorted.

Inshort: 

    In selection sort, you repeatedly find the smallest element from the unsorted part of the array and move it to the beginning.

    I hope you understand!
*/
