#include <iostream>
using namespace std;

int main() {

	char a[50];
	cin >> a;

	int i = 0;
	if (a[i] == '9') {
		i++;
	}

	for ( ; a[i] != '\0'; i++ ) {

		int digit = a[i] - '0';
		int diff = 9 - digit;

		if (diff > digit) {
			continue;
		}
		a[i] = diff + '0';
	}


	cout << a;

	return 0;
}