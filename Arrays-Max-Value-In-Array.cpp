#include<iostream>
#include <climits>

using namespace std;

int main() {

	int n;
	cin >> n;
	int A[n];

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	int Max = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		Max = max(Max, A[i]);
	}
	cout << Max;
	cout << endl;

	return 0;
}