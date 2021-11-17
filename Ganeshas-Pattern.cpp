#include <iostream>
using namespace std;
/*
for N = 7

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

*/
int main(){

	int N=10;

	for (int i = 1; i <= N/2 ; i++)
	{
		cout<<"*  *";
		if(i==1){
			cout<<"***";
		}
		cout<<endl;
	}
	for (int i = 1; i <= N; i++)
	{
		cout<<"*";
	}
	cout<<endl;


	for (int i = 1; i <= N/2; i++)
	{
		
	

	for (int j = 1; j <= N/2; j++)
	{
		cout<<" ";

	}
	
		cout<<"*  *";
		cout<<endl;

}

	return 0;
}