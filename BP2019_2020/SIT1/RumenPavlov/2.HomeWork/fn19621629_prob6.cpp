#include <iostream>
#include <math.h>
using namespace std;
int smetki(float a, float b);
int main()
{
	cout<<"Въведете 2 променливи"<<endl;
			float a, b, smetka;
	cin>>a;
	cin>>b;  
	cout<<"a="<<a<<"   "<<"b="<<b<<endl;
	smetka = smetki(a, b);
	cout<<"x = (a+b)³ + (a² + 2ba - 2ab + b²) =  "<<smetka<<endl;

	return 0; 
}
int smetki(float a, float b)
{
	float x;
	x= pow((a+b),3) + (pow(a,2) + 2*b*a - 2*a*b + pow(b,2));
	return x;
}