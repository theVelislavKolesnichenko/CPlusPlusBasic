#include <iostream>
using namespace std;

double inDouble(char a) {
	double n;
	cout << a << " = ";
	cin >> n;
	return n;
}
double func(double y) {
	return 2*(2*y + 5)/(14-y/3);
}

int main() {
	double a = inDouble('a');
	double b = inDouble('b');
	cout << "x1 = " << func(b) << endl;
	cout << "x2 = " << func(a) << endl;
}