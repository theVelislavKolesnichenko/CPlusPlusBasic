#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d, x1, x2, x;
	cout<<"a= ";
	cin>>a;
	cout<<"b= ";
	cin>>b;
	cout<<"d= ";
	cin>>d;
	c=pow(a,x)+2*b*x+d;
	if (d>0)
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		cout<<"x1= "<<x1<<endl;
		cout<<"x2= "<<x2<<endl;
	}
	if (d== 0)
	{
		x=-b/2*a;
		cout<<"x= "<<x<<endl;
	}
	if (d<0)
	{
		cout<<"net kornei"<<endl;
	}
	return 0;
}
