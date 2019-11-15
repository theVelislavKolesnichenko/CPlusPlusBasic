#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a;
	int e;
	int d;
	int st;
	cout<<"Въведете трицифрено число a=";
	cin>>a;
	e=a % 10;
	d=(a / 10) % 10;
	st=(a / 100) % 10;
	cout << " Units " << e << " Tens "<< d <<" Hundreds "<< st <<endl;
	system("pause");
	return 0;
}