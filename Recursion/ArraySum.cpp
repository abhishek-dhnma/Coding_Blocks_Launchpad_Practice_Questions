#include<iostream>

using namespace std;

bool IsArraySorted(int arr[], int n, int i) {

	//Base Case
	if (i == n - 1) {
		return true;
	}

	// Recursive Case
	if (arr[i] <= arr[i + 1]) {
		return IsArraySorted(arr, n, i + 1);
	} else {
		return false;
	}

}

int main() {

	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	IsArraySorted(arr, n, 0) ? cout << "Yes Sorted" : cout << "Not Sorted";


}