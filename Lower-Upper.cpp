#include<iostream>

using namespace std;


int main(){

char ch = 'g';
//cin>>ch
if (ch >='A' && ch <= 'Z')
{
	cout<<"UPPERCASE";
}else if (ch >= 'a' && ch <= 'z')
{
	cout<<"lowercase";
}else 
{
	cout<<"Invalid";
}

	return 0;
}