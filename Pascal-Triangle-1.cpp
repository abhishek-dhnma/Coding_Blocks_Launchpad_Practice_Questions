#include<iostream>
using namespace std;

int fact(int num){

    int factorial =1;
    for (int i = 2; i <=num; i++)
    {
        factorial *=i;
    }    
    return factorial;
}

int main(){

    int n=5,spc;
    //cin>>n;

    for (int i = 0; i <n; i++)
    {	

    	spc = n-i;
        while (spc-- >= 0)
            cout << " ";
        for (int j = 0; j <=i; j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<'\n';
        
    }
    return 0;
}