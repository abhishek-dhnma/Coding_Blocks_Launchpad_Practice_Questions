#include <iostream>
using namespace std;

int main() {
	int i;
	int a = 16;
	//cin>>a;
	int b = 24;
	//cin>>b;


	for ( i = min(a, b); i >= 1 ; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			break;
		}
	}

	cout << i;
	return 0;
}