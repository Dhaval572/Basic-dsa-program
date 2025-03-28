// Count sort algorithm
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void CountSort(vector<int> &arr)
{
    // If array is empty
    if (arr.empty())
        return;

    // Find the maximum element
    int maxEle = *max_element(arr.begin(), arr.end());

    // Temporary array where each elements initialized by zero
    vector<int> count(maxEle + 1, 0);

    for (int num : arr)
        count[num]++;

    // Overwrite arr with sorted elements
    int index = 0;
    for (int i = 0; i <= maxEle; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            arr[index] = i;
            index++; 
        }
    }
}

void traverse(vector<int> &arr)
{
    cout << "Element of the array is: ";
    for (int num : arr)
        cout << num << " ";

    cout << endl;
}

int main()
{
    vector<int> arr = {4, 6, 7, 3, 2, 4};

    cout << "Before sorting:\n";
    traverse(arr);

    CountSort(arr);

    cout << "After sorting:\n";
    traverse(arr);

    return 0;
}
