#include <iostream>
#include <string>
using namespace std;
char season( int a );

int main()
{
	int a;
	cout<<"Insert the number of the month"<<endl;
	cin>>a;
	cout<< season(a)<<endl;

	return 0;
}
char season(int a)
{
	if (a>=3 && a<=6)
	{
		cout<<"Spring";
		return 0;
	}
	else if(a>=7 && a<=10)
	{
		cout<<"Summer";
		return 0;
	}
	else if(a>=11 && a<=12)
	{
		cout<<"Winter";
		return 0;
	}
	else if(a>=1 && a<=2)
	{
		cout<<"Winter";
	return 0;
	}
	else if(a<1 || a>12)
	{
		cout<<"Invalid Month";
		return 0;
	}
}