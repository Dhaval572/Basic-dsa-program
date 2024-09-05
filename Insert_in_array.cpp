// Insertion in an array 
#include <iostream>
using namespace std;

// Displaying array's elements
void displayArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
            cout << arr[i] << " ";
    }

    cout << endl;
}

void insert(int *arr, int element, int index)
{
    int i = 0;

    while (arr[i] != 0)
    {
        i++; // i is going to the end of array
    }

    for (i; i >= index; i--)
    {
        arr[i] = arr[i - 1]; // arr[i] updates as arr[i - 1]
    }
    arr[i] = element; // inserting the element in the array
}

int main()
{
    int arr[100] = {7, 2, 0, 6};
    int element, index;

    cout << "Enter the element of array which you want to insert: ";
    cin >> element;

    cout << "In which index you want to insert element ";
    cin >> index;

    displayArr(arr, 100);
    insert(arr, element, index);
    displayArr(arr, 100);

    return 0;
}
