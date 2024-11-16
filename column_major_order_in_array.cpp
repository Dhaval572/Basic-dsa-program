// Column major order in C++
#include <iostream>
using namespace std;

int main()
{
	const int rows = 3;
	const int cols = 4;

	// Initialize a 2D array
	int array[rows][cols] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}};

	// Print the array in column-major order
	cout << "Array in Column Major Order:" << endl;
	for (int j = 0; j < cols; j++)
	{
		for (int i = 0; i < rows; i++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
