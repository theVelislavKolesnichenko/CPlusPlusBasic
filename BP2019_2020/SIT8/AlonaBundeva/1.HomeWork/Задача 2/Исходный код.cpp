#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a,b,c,x;
	cout<<"A= ";
	cin>>a;
	cout<<"B= ";
	cin>>b;
	cout<<"C= ";
	cin>>c;
	x=(a+b+c)/3;
	cout<<"Cредната стойност= "<<x<<endl;
	return 0;
}