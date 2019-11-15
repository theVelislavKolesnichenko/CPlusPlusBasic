#include <iostream>
using namespace std;
double ak(double y);
int main()
{
	double y;
	cout<<"y=";
	cin>>y;
	cout<<"x="<<ak(y)<<endl;
	return 0;
}
double ak(double y)
{
	if(y>0)
	{
		return 20/y;
		
	}
	else 
	{
		cout<<"ne moje da se deli na 0";
		return 0;
	}
	
}