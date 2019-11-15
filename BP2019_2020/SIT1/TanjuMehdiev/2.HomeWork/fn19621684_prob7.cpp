#include <iostream>
using namespace std;
double x(double y) ;
int main()
{
	double y;
	cout<<"y=";
	cin>>y;
	cout<<"x="<<x(y)<<endl;
	return 0;
}

double x(double y)
{
	return 2*(2*y+5)/(14-y/3);
}
