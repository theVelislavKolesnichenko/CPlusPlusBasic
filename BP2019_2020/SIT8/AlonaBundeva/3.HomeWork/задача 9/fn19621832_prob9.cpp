#include<iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a;
	cout<<"възраст= ";
	cin>>a;
	if(a<1&&a>0)
	{
		cout<<"baby"<<endl;
	}
	else if (a<3&&a>=1)
	{
		cout<<"toddler"<<endl;
	}
	else if(a<5&&a>=3)
	{
		cout<<"preschool"<<endl;
	}
	else if(a<=12&&a>=5)
	{
		cout<<"gradeschooler"<<endl;
	}
	else if(a<18&&a>=13)
	{
		cout<<"teen"<<endl;
	}
	else if (a<21&&a>=18)
	{
		cout<<"young adult"<<endl;
	}
	return 0;
}