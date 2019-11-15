#include <iostream>

using namespace std;
void add(int a , int b, int *p, int sum);
int main()
{
	int a, b, sum;
	do
	{
		cout<<"Enter two numbers"<<endl;
		cin>>a;
		cin>>b;
	}while(b<a);
	int *p=&sum;
	cout<<add<<endl;
	add(a, b, p, sum);
	cout<<sum<<endl;



	return 0;
 }
void add(int a, int b, int *p, int sum)
{
	*p=a+b;
}