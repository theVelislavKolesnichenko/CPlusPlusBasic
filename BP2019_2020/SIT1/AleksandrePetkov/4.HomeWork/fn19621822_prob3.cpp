#include <iostream>
using namespace std;

double input(char ch);
void swap(double &a, double &b);
double NOD(double a, double b);
double NOK(double a, double b);

int main() {
	double a = input('a');
	double b = input('b');

	cout << "NOD = " << NOD(a, b) << endl;
	cout << "NOK = " << NOK(a, b) << endl;
	system("pause");
}

double input(char ch) {
	double n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
void swap(double &a, double &b) {
	double c = a;
	a = b;
	b = c;
}
double NOD(double a, double b) {
	while (a != b) {
		if (a < b) swap(a, b);
		a -= b;
	}
	return a;
}
double NOK(double a, double b) {
	return a * (b / NOD(a, b));
}