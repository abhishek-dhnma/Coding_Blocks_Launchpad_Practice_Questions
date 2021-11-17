#include <iostream>
#include <cmath>
using namespace std;



bool IsPrime(int n){

		for (int i = 2; i <= sqrt(n); i++)
		{
			if(n%i==0){

				return false;
			}
		}

return true;
}


int main(){
	int N;
	cin>>N;

	IsPrime(N) ? cout<<"Prime" : cout<<"Not Prime";




	return 0;
}