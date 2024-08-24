// Insertion at end in array
#include <iostream>
using namespace std;

void displayArray(int size, int *arr)
{
    cout << "Elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertionAtEnd(int data, int *arr, int &size, int capacity)
{
    if (size >= capacity)
    {
        cout << "Array is full. Cannot insert new element.\n";
        return;
    }

    arr[size] = data; 					// Insert at the end
    size++;								
}

int main()
{
    int capacity = 8;
    int arr[capacity] = {1, 2, 3};
    int size = 3;

    cout << "Before insertion:\n";
    displayArray(size, arr);

start:
    int data;
    cout << "Enter the value to insert (Only integers): ";
    cin >> data;

    insertionAtEnd(data, arr, size, capacity);

    cout << "After insertion:\n";
    displayArray(size, arr);

    if (size >= capacity)
    {
        cout << "\nNow the array is full, so you can't insert any more elements.\n";
        return 0;
    }

    string c;
    cout << "Do you want to insert again? (yes / no): ";
    cin >> c;

    if (c == "yes" || c == "YES" || c == "Yes" )
    {
        goto start;
    }
    else if (c == "NO" || c == "no" || c == "No")
    {
        cout << "Ok!\n";
    }
    else
    {
        cout << "Invalid choice. Exiting...\n";
		return -1;
    }

    return 0;
}
