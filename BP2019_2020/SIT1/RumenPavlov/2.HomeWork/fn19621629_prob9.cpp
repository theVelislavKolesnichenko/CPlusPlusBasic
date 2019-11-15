#include <iostream>
using namespace std;
struct point
{
	float a, b, c;
};
int main()
{
	float result;
	point a;
	cout<<"Въведете 3 страни за триъгълника."<<endl;
	cin>> a.a;
	cin>> a.b;
	cin>> a.c;
	cout<<"a="<<a.a<<"  "<<"b="<<a.b<<"  "<<"c="<<a.c<<endl;
	result= a.a + a.b + a.c;
	cout<<"Обиколката на триъгълника е равна на: "<<result<<endl;








return 0;
}