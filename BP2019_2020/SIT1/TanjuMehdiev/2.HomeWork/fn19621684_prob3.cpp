#include <iostream>
using namespace std;
int x(int a, int b,int c,int d);
int main()
{
	int a,b,c,d;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	cout<<"d=";
	cin>>d;
	cout<<x(a,b,c,d)<<endl;
	return 0;
}

 int x(int a, int b,int c,int d)
{
	return (a+b+c+d)/4;
}
