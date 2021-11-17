#include <iostream>
using namespace std;


int main(){


	int n = 371;
	int temp = n;
	int sum=0,r;

while(n>0){
	r = n%10;
	sum+=r*r*r;
	n=n/10;

}

if(sum==temp) cout<<""

	return 0;
}