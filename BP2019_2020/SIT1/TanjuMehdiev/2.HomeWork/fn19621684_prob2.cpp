#include <iostream>
using namespace std;
double x(double a,double b);
double y(double c,double d);
double z(double e,double f);
double t(double g,double h);

int main()
{
	double a,b,c,d,e,f,g,h;
	cout<<"sbor\n";
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<a<<"+"<<b<<"="<<x(a,b)<<endl;
	cout<<"razlika\n";
	cout<<"a=";
	cin>>c;
	cout<<"b=";
	cin>>d;
	cout<<c<<"-"<<d<<"="<<y(c,d)<<endl;
	cout<<"delenie\n";
	cout<<"a=";
	cin>>e;
	cout<<"b=";
	cin>>f;
	cout<<e<<"/"<<f<<"="<<z(e,f)<<endl;
	cout<<"umnojenie\n";
	cout<<"a=";
	cin>>g;
	cout<<"b=";
	cin>>h;
	cout<<g<<"*"<<h<<"="<<t(g,h)<<endl;
	return 0;
}

double x(double a,double b)
{
	return a+b;
}
double y(double c,double d)
{
	return c-d;
}
double z(double e,double f)
{
	return e/f;
}
double t(double g,double h)
{
	return g*h;
}