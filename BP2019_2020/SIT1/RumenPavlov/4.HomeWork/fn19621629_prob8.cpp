#include <iostream>
using namespace std;
void f1(int a);
int main()
{
int a;
cin>>a;
f1(a);
return 0;
}
void f1(int a)
{
	while(a!=0)
	{
	if (a<1000)
		{cout<<"Less that four-digits"<<endl;
	cin>>a;}
	if (a>9999)
		{cout<<"More than four-digits"<<endl;
	cin>>a;}
	if (a>=1000 && a<=9999)
		cin>>a;
	};

}
