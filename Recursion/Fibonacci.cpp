#include <iostream>
using namespace std;

int Fibonacci(int n) {

	// Base Case

	if (n == 0 || n ==  1 ) {

		return n;
	}

	// Recursive Case

	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {

	int n;
	cin >> n;

	cout << Fibonacci(n);

}