#include <iostream>
using namespace std;
double x(double a, double b);
int main()
{
	double a,b;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"x="<<x(a,b)<<endl;
	return 0;
}

double x(double a, double b)
{
	return 2*((a-b)/(b-a));
}
