#include <iostream>
using namespace std;

double inDouble(char a) {
	double n;
	cout << a << " = ";
	cin >> n;
	return n;
}
double average(double a, double b, double c, double d) {
	return (a + b + c + d) / 4;
}

int main() {
	double a = inDouble('a');
	double b = inDouble('b');
	double c = inDouble('c');
	double d = inDouble('d');

	cout << "Average = " << average(a, b, c, d) << endl;
}