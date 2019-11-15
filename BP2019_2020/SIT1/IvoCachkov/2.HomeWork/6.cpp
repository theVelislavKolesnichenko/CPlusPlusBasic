#include <iostream>
#include<string>
using namespace std;

double Fninputreal(string p)
{
	double w = 0.0;
	cout << p;
	cin >> w;
	return w;
}
double Fnsum(double a, double b)
{
	return pow((a + b), 3) + (pow(a, 2) + 2 * b * a - 2 * a * b + pow(b, 2));
}
int main()
{
	double w;
	w = Fninputreal("Please insert value p = ");
	double a, b;
	cout << "Please insert value a = ";
	cin >> a;
	cout << "Please insert value b = ";
	cin >> b;
	cout << "x = " << Fnsum(a, b) << endl;
	system("Pause");
	return 0;
}