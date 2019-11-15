#include <iostream>
using namespace std;
void f1(int a);
int main()
{
	int a;
	cout<<"Въведете положително число"<<endl;
	cin>>a;
	while(a<0)
	{
	cout<<"Въведете положително число"<<endl;
	cin>>a;
	}
	f1(a);






return 0;
}
void f1( int a)
{
	int b;
	b=1;
while(b<=a)
{
	cout<<b<<endl;
	b+=1;
	;
}
}