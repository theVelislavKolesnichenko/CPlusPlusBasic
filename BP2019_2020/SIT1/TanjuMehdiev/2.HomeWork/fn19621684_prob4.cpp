#include <iostream>
using namespace std;
const int a=837;
double units(double x);
double tens(double y);
double hundreds(double z);
int main()
{
	cout<<a<<endl;
	cout<<"Units="<<units(a)<<endl;
	cout<<"Tens="<<tens(a)<<endl;
	cout<<"Hundreds="<<hundreds(a)<<endl;
	return 0;
}
double units(double x)
{
	return a%10;
}
double tens(double y)
{
	return (a/10)%10;
}
double hundreds(double z)
{
	return (a/100)%10;
}