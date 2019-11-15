#include <iostream>
using namespace std;
int mid(int a, int b, int c, int d);
int main()
{
	cout<<"Въведете 4 променливи"<<endl;
			int a, b, c, d, middle;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cout<<"a="<<a<<"   "<<"b="<<b<<"   "<<"c="<<c<<"   "<<"d="<<d<<endl;
	middle= mid(a, b, c, d);
	cout<<"Среднa стойност = "<<middle<<endl;










	return 0;
}
int mid(int a, int b, int c, int d)
{
	int result;
	result= (a + b + c + d)/4;
	return result;
}