#include <iostream>
using namespace std;

int main(){
int i,j,n=5;

//cin>>n;

for ( i = 0; i < n ; i++)
{	
	for (j = 0; j < i+1 ; j++)
	{
		cout<<i+1<<" ";
	}

	for (int k = i+1; k < n; k++)
	{
		cout<<k+1<<" ";
	}

	cout<<endl;
}

	return 0;
}