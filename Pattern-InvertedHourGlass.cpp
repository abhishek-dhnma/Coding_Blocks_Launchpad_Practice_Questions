#include<iostream>
using namespace std;
/*

5                   5 
5 4               4 5 
5 4 3           3 4 5 
5 4 3 2       2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2 1 0 1 2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2       2 3 4 5 
5 4 3           3 4 5 
5 4               4 5 
5                   5 

*/
int main() {

	int N = 5;

	//Part 1

	for(int i=N; i>=1; i--) {
		// in the ith row, print i stars

		for(int j=N; j>=i; j--) {
			cout << j<<" ";
		}
		cout << endl;
	}

	//Part 2

	

	//Part 3

	//Part 4
	for (int i = N; i >=0 ; i--)
	{
		cout<<i<<" ";
	}

	for (int i = 1; i <= N ; i++)
	{
		cout<<i<<" ";
	}

	cout<<endl;

	for(int i=N; i>=1; i--) {
		// in the ith row, print i-1 stars
		for(int j=N ; j>N-i ; j--) {
			cout << j<<" ";
		}
		cout << endl;
	}


	return 0;
}