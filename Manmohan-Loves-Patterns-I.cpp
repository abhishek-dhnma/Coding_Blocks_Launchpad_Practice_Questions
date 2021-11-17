#include <iostream>
using namespace std;


int main(){

	int n = 13;

	for (int i = 1; i <= n; i++)
	{
		if (i%2==0) // Even
		{
			for (int k = 1; k <= i; k++)
			{
				if (k == 1 || k == i)
			{
				cout<<"1";
			}
			else{

				cout<<"0";

			}
			}
		}else { // Odd

			for (int j = 1; j <= i; j++)
			{
				cout<<"1";
			}

		}
		cout<<endl;
	}

	return 0;

}