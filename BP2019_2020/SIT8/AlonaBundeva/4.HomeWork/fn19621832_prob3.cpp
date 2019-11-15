#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	int nok=0;
	if (a%b==0)
	{
		nok=a;
		if(b<nok)
		{
			nok=b;
		}
	}
	else 
	{
		nok=a*b;
	}
	while (a != b)
	{
		if(a>b)
		{
			a-=b;
		}
		else 
		{
			b-=a;
		}
	}
	cout<<"nok is "<<nok<<endl;
	cout<<"nod is "<<a<<endl;
	return 0;
}