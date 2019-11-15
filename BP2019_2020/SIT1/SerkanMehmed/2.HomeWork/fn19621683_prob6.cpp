#include <iostream>
using namespace std;
double funkciq(double a, double b);
int main()
{ 
	int a, b;
	cout<<"Insert a=";
	cin>>a;
	cout<<"Insert b=";
	cin>>b;
	cout<<funkciq(a,b);

	return 0;
}		
	double funkciq(double a, double b)
	{
			return pow((a+b),3)+ pow(a,2)+2*b*a-2*a*b+ pow(b,2) ;
	}
