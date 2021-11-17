#include <iostream>
using namespace std;

int main(){


	int n = 5433231;
	int target = 3;
	int rem;
	int sum=0;
	int count=0;

	
while( n>0){

	rem = n%10;
	//cout<<rem<<" ";
	n = n/10;

	if(rem==target)
	{
		count++;
	}
}


cout<<count;




	return 0;
}