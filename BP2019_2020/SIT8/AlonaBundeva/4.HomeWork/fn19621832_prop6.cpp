#include<iostream>
using namespace std;
int main()
{
	for (int i=0; i<2; i++)
	{
		for(int j=1; j-1<2; j++)
		{
			cout<<"%";
		}
		cout<<endl;
	}
	for (int i=0; i<3; i++)
	{
		for (int k=3; k-1>0; k--)
		{
			cout<<"%";
		}
		cout<<endl;
	}
	return 0;
}
