#include <iostream>
#include<string>
using namespace std;
#include <string>

double Fninputreal(string a)
{
	double w = 0.0;
	cout << a;
	cin >> w;

	return w;
}
double Fnsum(double Param1, double Param2)
{
	return 2 * ((Param1 - Param2) / (Param2 - Param1));
}
int main()
{
	double w;
	w = Fninputreal("Please enter value d = ");
	double a, b;
	cout << "Please insert value a = ";
	cin >> a;
	cout << "Please insert value b = ";
	cin >> b;
	cout << "x = " << Fnsum(a, b) << endl;
	system("Pause");
	return 0;
}