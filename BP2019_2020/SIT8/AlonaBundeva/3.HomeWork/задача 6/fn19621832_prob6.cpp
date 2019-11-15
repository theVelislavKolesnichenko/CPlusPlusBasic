#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout<<"y= ";
	cin>>y;
	if (y>=58&&y<=87)
	{
		cout<<(x=y^3+(4*y+2*y));
	}
	else if (y>15&&y<58)
	{
		cout<<(x=2*(2*y+5)/(14-y/3));
	}
	return 0;
}
