#include<iostream>
using namespace std;

void rootsQE(double a, double b, double c, double d);

int main()
{
	double a, b, c, d;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;
	d = b * b - 4 * a * c;
	rootsQE(a, b, c, d);

	return 0;
}
void rootsQE(double a, double b, double c,double d)
{
	if (d > 0) {
		double x1 = (-b + sqrt(d)) / (2 * a);
		double x2 = (-b - sqrt(d)) / (2 * a);
		cout <<"root 1 = "<< x1 << endl;
		cout <<"root 2 = "<< x2 << endl;
	}
	else if (d == 0) {
		cout << "Invalid input!" << endl;
	}
	else {
		cout << "Not a real root!" << endl;
	}
}
