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
double Fnsum(double Param1, double Param2)
{
	return Param1 + Param2;
}
double Fnminus(double Param1, double Param2)
{
	return Param1 - Param2;
}
double Fnmulti(double Param1, double Param2)
{
	return Param1 * Param2;
}
double Fndivide(double Param1, double Param2)
{
	return Param1 / Param2;
}
int main()
{   double d;
	d = Fninputreal("Please enter value d = ");
	system("Pause");
	return 0;
	cout << "sum 2.5+4.8 = " << Fnsum(2.5, 4.😎 << endl;
	cout << "minus 7.5-1.7 = " << Fnminus(7.5, 1.7) << endl;
	cout << "multi 8.4*5.6 = " << Fnmulti(8.4, 5.6) << endl;
	cout << "divide 8/5 = " << Fndivide(8, 5) << endl;
	system("Pause");
	return 0;
}