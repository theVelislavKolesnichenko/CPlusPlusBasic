#include <iostream>
using namespace std;

double Mul(double &sum, double a);

int main()
{
	double a;
	double sum = 1;
	cout << "\na=";
	cin >> a;
	if (a < 0) { cout << "Invalid number!\na="; cin >> a; }
	while(a!=0)
	{
		cout << "sum=" << Mul(sum, a) << endl;
		cout << "\na=";
		cin >> a;
		if (a < 0) { cout << "Invalid number!\na="; cin >> a; }
	}
	return 0;
}

double Mul(double &sum, double a)
{
	return sum += sum * a;
}