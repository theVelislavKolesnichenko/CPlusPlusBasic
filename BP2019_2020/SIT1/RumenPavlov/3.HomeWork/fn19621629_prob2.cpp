#include <iostream>
using namespace std;
void returnf(float a, float b);
int main()
{
	float a, b;
	cout<<"Въведете 2 числа"<<endl;
	cin>>a;
	cin>>b;
	returnf(a, b);





return 0;
}
void returnf(float a, float b)
{
	if (a>b)
		cout<<a<<">"<<b<<endl;
	else 
		cout<<b<<">"<<a<<endl;

}