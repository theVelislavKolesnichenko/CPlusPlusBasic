#include <iostream>
using namespace std;
char god(int a);
int main()
{
	int a;
	cout<<"wywedete godina:";
	cin>>a;
	cout<<god(a);
	return 0;
}
char god(int a)
{
	if(a<1000&&a>0)
	{
		cout<<"less four-digit\n";
		return 0;
	}
	else if(a>=1000&&a<10000)
	{
		cout<<"four-digit\n";
		return 0;
	}
	else if(a>10000)
	{
		cout<<"more four-digit\n";
		return 0;
	}
	else if(a==0)
	{
		cout<<"END\n";
		return 0;
	}
}

