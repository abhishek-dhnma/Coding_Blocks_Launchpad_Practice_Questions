#include <iostream>
using namespace std;

int main(){

	int i,j,k,l,n = 4;
	for ( i = 0; i < n; i++)
	{
		for ( j = 1; j <= i+1; j++)
		{
			cout<<j<<"	";
		}

		for ( k = 1; k <= (n+1)-2*i; k++)
		{
			cout<<" "<<"	";
		}

		for ( l = i+1; l >= 1 ; l--)
		{
				
				if (n==l)
				{
					continue;
				}
				cout<<l<<"	";
		}
		
		cout<<endl;
	}

	return 0;
}