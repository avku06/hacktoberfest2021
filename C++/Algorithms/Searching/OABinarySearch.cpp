#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int x)
{

	bool isAsc = arr[start] < arr[end];
	while (start <= end) {
		int middle = start + (end - start) / 2;
		if (arr[middle] == x)
			return middle;
		if (isAsc == true) {
			if (arr[middle] < x)
				start = middle + 1;
			else
				end = middle - 1;
		}
		else {
			if (arr[middle] > x)
				start = middle + 1;

			else
				end = middle - 1;
		}
	}

	return -1;
}

int main()
{
	int arr[] = { 40, 10, 5, 2, 1 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << binarySearch(arr, 0, n - 1, x);

	return 0;
}
