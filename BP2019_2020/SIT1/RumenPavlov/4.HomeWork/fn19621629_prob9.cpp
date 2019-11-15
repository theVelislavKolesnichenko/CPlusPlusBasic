#include <iostream>
using namespace std;
void f1(int a);
int main()
{
	int a;
	cout<<"Въведете година"<<endl;
	cin>>a;
	f1(a);


return 0;
}
void f1(int a)
{
	while (a!=0)
	{
if (a%4==0)
{
	cout<<"Годината е високосна"<<endl;
	cin>>a;
}
if (a%4>0)
{
	cout<<"Годината не е високосна"<<endl;
	cin>>a;
}
	}
}