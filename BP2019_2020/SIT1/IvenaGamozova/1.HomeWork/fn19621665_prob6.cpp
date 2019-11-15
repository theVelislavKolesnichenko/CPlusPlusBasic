#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a;
	float b;
	float c;
	float z;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	z=2*(a-b)*(a-c);
	cout<<"z="<<z<<endl;
	system("pause");
	return 0;
}
