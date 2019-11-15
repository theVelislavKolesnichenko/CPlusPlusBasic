#include <iostream>
#include <math.h>
using namespace std;
void f1(int a, int b, int c);
int main()
{
	int a,b,c;
	cout<<"Въведете 3 числа за ax^2+bx+c"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	while(a==0 || b==0 || c==0)
	{
		cout<<"Това не е квадратно уравнение"<<endl;
		cout<<"Въведете числата отново"<<endl;
		cin>>a;
		cin>>b;
		cin>>c;
	}
	f1(a, b, c);
return 0;
}
void f1(int a, int b, int c)
{
	int d;
	float x1, x2;
	d=pow(b,2)-4*a*c;
	cout<<"Дискриминантата D е равна на: "<<d<<endl;
	if (d<0)
		cout<<"Няма реални корени"<<endl;
	if (d==0)
	{
	   x1=-b/2*a;
	   cout<<"x1= "<<x1<<endl;
	}
	if (d>0)
	{
		x1=(-b+sqrt(d))/2*a;
		x2=(-b-sqrt(d))/2*a;
		cout<<"x1= "<<x1<<" "<<"x2= "<<x2<<endl;
	}
}