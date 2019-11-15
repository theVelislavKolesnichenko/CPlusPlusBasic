#include <iostream>
using namespace std;
float sum(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
int main()
{
	cout<<"Въведете 2 променливи"<<endl;
			float a, b, sumr, subr, mulr, divr;
	cin>>a;
	cin>>b;
	cout<<"a="<<a<<"   "<<"b="<<b<<endl;
	sumr= sum(a, b);
	cout<<"sum="<<sumr<<endl;

	subr= sub(a, b);
	cout<<"sub="<<subr<<endl;

	mulr= mul(a, b);
	cout<<"mul="<<mulr<<endl;

	divr= div(a, b);
	cout<<"div="<<divr<<endl;










	return 0;
}
float sum(float a, float b)
{
	float result;
	result= a + b;
	return result;
}
float sub(float a, float b)
{
	float result;
	result= a - b;
	return result;
}
float mul(float a, float b)
{
	float result;
	result= a * b;
	return result;
}
float div(float a, float b)
{
	float result;
	result= a / b;
	return result;
}