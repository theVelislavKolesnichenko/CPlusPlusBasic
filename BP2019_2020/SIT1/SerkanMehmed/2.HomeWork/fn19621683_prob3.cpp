#include <iostream>
using namespace std;
double funkciq(double a, double b, double c, double d);
int main()
{ 
	int a, b, c, d;
	cout<<"Insert a=";
	cin>>a;
	cout<<"Insert b=";
	cin>>b;
	cout<<"Insert c=";
	cin>>c;
	cout<<"Insert d=";
	cin>>d;
	cout<<funkciq(a,b,c,d);

	return 0;
}		
	double funkciq(double a, double b, double c, double d)
	{
			return (a+b+c+d)/4;
	}
