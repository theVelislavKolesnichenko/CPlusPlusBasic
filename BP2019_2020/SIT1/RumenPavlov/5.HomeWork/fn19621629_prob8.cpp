#include <iostream>
using namespace std;

void f1(float *p);

int main()
{
	float a=0;

	float *p=&a;
	cout<<*p<<endl;
	f1(p);
	cout<<*p<<endl;


	//??


 return 0;
}
void f1(float *p)
{
	cout<<"Enter a number"<<endl;
	cin>>*p;
}