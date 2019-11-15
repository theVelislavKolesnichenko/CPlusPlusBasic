#include<iostream>
using namespace std;
int main()

{
	int a;
	cout<<"enter a number: ";
	cin>>a;
	while (a>0)
	{
		if(a>1000)
		{
			cout<<"less four-digit";
		}
		else if(a<10000)
		{
			cout<<"four-digit";
		}
		else 
		{
			cout<<"more four-digit";
		}
	}
	return 0;
}