#include <iostream>
using namespace std;
double chislo(double a, double b, double c);
int main() {
	double a, b, c;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	cout << "z=" << chislo(a, b, c) << endl;
	return 0;
}
double chislo(double a, double b, double c) {
	return 2 * (a - b) * (a - c);
}
