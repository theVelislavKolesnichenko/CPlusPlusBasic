#include <iostream>
using namespace std;
char vis(int a);
int main()
{
	int a;
	do
	{
		cout<<"Vyvedete godina:";
		cin>>a;
	vis(a);
	}while(a!=0);
	return 0;
}
char vis(int a)
{
	
	if(a%4==0)
	{
		cout<<"Visokosna\n";
		return 0;
	}
	else
	{
		cout<<"Ne e visokosna\n";
		return 0;
	}
	
	
}
