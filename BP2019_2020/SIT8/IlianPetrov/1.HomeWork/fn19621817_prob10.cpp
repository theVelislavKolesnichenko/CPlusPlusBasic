#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double a, b;
	double P;
	double S;

	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;

	P = double (2 * a + 2 * b);
	S = double(a * b);

	cout << "P= " << P << endl;
	cout << "S= " << S << endl;
}