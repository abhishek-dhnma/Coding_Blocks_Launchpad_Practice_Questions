#include <iostream>
using namespace std;


bool MatrixSearch(int[]){



	bool found=false;
    for (int i = 0 ; i < n; i++)
    {
        for (int j = m-1 ; j >=0 ; j++)
        {
            if (arr[i][j]== Target)
            {
                found=true;
            }
            if (arr[i][j]>Target)
            {
                j--;
            }
            else{
                i++;
            }

        }
        
    }
  


    for (int i = 0; i < ; ++i)
    {
    	/* code */
    }



}

int main(){

	int n,m,Target;

    cin>>n>>m,Target;

    int arr[n][m];


     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }


	bool MatrixSearch(n,m);




	return 0;
}