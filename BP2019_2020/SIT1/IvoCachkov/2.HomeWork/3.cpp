#include <iostream>
#include <string>
using namespace std;

double Fninputreal(string Param)
{
	double d = 0.0;
	cout << Param;
	cin >> d;
	return d;
}
double Fnavg(double a, double b, double c, double d)
{
	return (a + b + c + d) / 4;
}
int main()
{
	double a, b, c, d;
	a = Fninputreal("Please enter value a = ");
	b = Fninputreal("Please enter value b = ");
	c = Fninputreal("Please enter value c = ");
	d = Fninputreal("Please enter value d = ");
	cout << "(a+b+c+d)/4 = " << Fnavg(a, b, c, d) << endl;
	system("Pause");
	return 0;
}