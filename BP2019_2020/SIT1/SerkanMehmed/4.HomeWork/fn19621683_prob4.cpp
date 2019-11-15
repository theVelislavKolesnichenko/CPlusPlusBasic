#include <iostream>
#include <math.h>
using namespace std;
int izraz(int a, int b, int d);
	int main()
{
	int a,b,d;
	cout<<"Insert a";
	cin>>a;
	cout<<"Insert b";
	cin>>b;
	cout<<"Insert d";
	cin>>d;

	cout<< izraz(a,b,d)<<endl;
}
int izraz(int a, int b, int d)
{
	cout<<a+2*b*a+d;
	return 0;
}
