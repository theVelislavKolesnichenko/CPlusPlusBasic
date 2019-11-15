#include <iostream>
using namespace std;
double z(double a, double b);
double x(double c, double d);
double n(double e, double f);
double m(double g, double i);

int main()
{ 
	double a,b,c,d,e,f,g,i;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<z(a,b)<<endl;
	cout<<"c=";
	cin>>c;
	cout<<"d=";
	cin>>d;
	cout<<x(c,d)<<endl;
	cout<<"e=";
	cin>>e;
	cout<<"f=";
	cin>>f;
	cout<<n(e,f)<<endl;
	cout<<"g=";
	cin>>g;
	cout<<"i=";
	cin>>i;
	cout<<m(g, i)<<endl;

	return 0;
}
double z(double a, double b)

{		return a+b;
}
double x(double c, double d)
{
		return c-d;
}
double n(double e, double f)
{	
		return e/f;
}
double m(double g, double i)
{
		return g*i;
}






