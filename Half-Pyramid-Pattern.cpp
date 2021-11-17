#include <iostream>
using namespace std;
/*
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
*/

int main(){

	int N=5;

	for (int i = 0; i < N; i++)
	{
		for (int J = 0; J <= i; J++)
		{
			cout<<J+1<<" ";
		}
		cout<<endl;
	}

	return 0;
}