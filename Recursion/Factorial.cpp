#include<iostream>
using namespace std;

int factorial(int n) {

	//Base Case

	if (n == 0) {
		return 1;
	}

	// Recursion Case
	return n * factorial(n - 1);
}

int main() {

	int n;
	cin >> n;

	cout << factorial(n);

}