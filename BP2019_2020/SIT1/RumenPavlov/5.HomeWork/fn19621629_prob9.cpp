#include <iostream>

using namespace std;
void multiply(int a , int b, int *p, int mul);
int main()
{
	int a, b, mul;
	do
	{
		cout<<"Enter two numbers"<<endl;
		cin>>a;
		cin>>b;
	}while(b<a);
	int *p=&mul;
	cout<<mul<<endl;
	multiply(a, b, p, mul);
	cout<<mul<<endl;



	return 0;
 }
void multiply(int a, int b, int *p, int mul)
{
	*p=a*b;
}