#include <iostream>
#include <algorithm>

using namespace std;

int n, m;


int getClosest(int, int, int);

// Binary search
int findClosest(int arr[], int n, int target)
{
	if (target <= arr[0])
		return arr[0];
	if (target >= arr[n - 1])
		return arr[n - 1];

	int i = 0, j = n, mid = 0;

	while (i < j) {
		mid = (i + j) / 2;

		if (arr[mid] == target)
			return arr[mid];

		if (target < arr[mid]) {
			if (mid > 0 && target > arr[mid - 1])
				return getClosest(arr[mid - 1], arr[mid], target);

			j = mid;
		}
		else {
			if (mid < n - 1 && target < arr[mid + 1])
				return getClosest(arr[mid], arr[mid + 1], target);

			i = mid + 1;
		}
	}

	return arr[mid];
}

int getClosest(int val1, int val2, int target)
{
	if (abs(target - val1) == abs(target - val2)) {
		return val1;
	}
	else if (target - val1 >= val2 - target)
		return val2;
	else
		return val1;
}

int main()
{

	cin >> n >> m;
	if ((n < 1 || n > 50000) && (m < 1 || m > 25000))
		return -1;

	int* nArray = new int[n];
	int* mArray = new int[m];
	int* vastus = new int[m];

	for (int i = 0; i < n; i++) {
		cin >> nArray[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> mArray[i];
		vastus[i] = 0;
	}

	if (n == 1) {
		for (int i = 0; i < m; i++) {
			vastus[i] = nArray[0];
			if (i == m - 1) {
				cout << vastus[i];
			}
			else {
				cout << vastus[i] << " ";
			}
		}
		delete[] nArray;
		delete[] mArray;
		delete[] vastus;
		return 0;
	}

	for (int i = 0; i < m; i++) {
		if (i == m - 1)
			cout << findClosest(nArray, n, mArray[i]);
		else
			cout << findClosest(nArray, n, mArray[i]) << " ";
	}

	delete[] nArray;
	delete[] mArray;
	delete[] vastus;

	return 0;
}
