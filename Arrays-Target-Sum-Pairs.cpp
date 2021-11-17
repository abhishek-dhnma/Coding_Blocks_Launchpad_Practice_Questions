#include <iostream>
using namespace std;


void PrintMe(int i , int j, int a[]) // ( A<=B<=C)
{
	if (a[i] > a[j] ) {

		cout << a[j] << " and " << a[i] << endl;
	}
	else {
		cout << a[i] << " and " << a[j] << endl;
	}

}


void Sol(int n, int a[], int t) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {

			sum = a[i] + a[j];
			if ( sum == t ) {
				PrintMe(i, j, a);


			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int t;
	cin >> t;

	//OPERATIONS
	Sol(n, a, t);

}