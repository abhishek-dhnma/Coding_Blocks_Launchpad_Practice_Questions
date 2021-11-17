#include<iostream>
using namespace std;

int Triangle(int n) {
	//base case

	if (n == 1) {
		return 1;
	}

	// recursive case

	return  n + Triangle(n - 1);

}

int main() {
	int n;
	cin >> n;

	int res = Triangle(n);
	cout << res;

}