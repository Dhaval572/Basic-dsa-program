// Simple example of sliding window
#include <iostream>
#include <vector>
using namespace std;

int maxSumSlidingWindow(const std::vector<int> &arr, int k)
{
	int windowSum = 0;
	int maxSum = 0;

	// First window
	for (int i = 0; i < k; ++i)
		windowSum += arr[i];

	maxSum = windowSum;

	// Slide the window
	for (int i = k; i < arr.size(); ++i)
	{
		windowSum += arr[i] - arr[i - k]; // Slide right
		maxSum = std::max(maxSum, windowSum);
	}

	return maxSum;
}

int main()
{
	vector<int> arr = {1, 3, 5, 2, 8, 1, 5};
	int result = maxSumSlidingWindow(arr, 3);
	cout << "Maximum sum of a subarray is: " << result << endl;
	return 0;
}
