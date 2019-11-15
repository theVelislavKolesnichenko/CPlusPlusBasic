#include <iostream>
using namespace std;
struct point
{
	float a, b;
};
int main()
{
	float result;
	point a;
	cout<<"Въведете 2 страни за правоъгълника."<<endl;
	cin>> a.a;
	cin>> a.b;
	cout<<"a="<<a.a<<"  "<<"b="<<a.b<<endl;
	result= a.a*a.b;
	cout<<"Лицето на правоъгълника е равно на: "<<result<<endl;








return 0;
}