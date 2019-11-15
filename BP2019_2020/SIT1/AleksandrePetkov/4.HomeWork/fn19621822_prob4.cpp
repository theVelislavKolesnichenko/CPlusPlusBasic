#include <iostream>
#include <math.h>
using namespace std;

double input(char ch);
void quadratic(int a, int b, int c);

int main() {
	double a = input('a');
	double b = input('b');
	double c = input('c');

	quadratic(a, b, c);
}

double input(char ch) {
	double n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
/* ax^2 + bx + c = 0 */
void quadratic(int a, int b, int c) {
	double discriminant = b*b - 4*a*c;
	double x1 = (-b + sqrt(discriminant)) / (2 * a);
	double x2 = (-b - sqrt(discriminant)) / (2 * a);

	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
}