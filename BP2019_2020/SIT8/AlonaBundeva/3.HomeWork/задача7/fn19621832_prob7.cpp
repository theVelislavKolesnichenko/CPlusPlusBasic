#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x, y;
	cout<<"y= ";
	cin>>y;
	if (y<=-5)
	{
		cout<<(x=y*y*y+(4*y+2*y))<<endl;
	}
	else
	{
		cout<<(x=2*(2*y+5)/(14-y/3))<<endl;
	}
	return 0;
}