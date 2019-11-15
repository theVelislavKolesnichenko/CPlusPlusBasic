#include <iostream>
#include <math.h>
using namespace std;
void result(double a, double b, double d);

int main() {
	double a, b, d;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "d= ";
	cin >> d;
	result(a, b, d);
}
void result(double a, double b, double d) {
	double c = b * b - 4 * a * d;
	if (c < 0)
		cout << "nqma ravni koreni";
	else if (c== 0)
		cout << "x= " << -b / (2 * a);
	else 
		cout << "x1= " << (-b + sqrt(c)) / (2 * a);
	cout << "x2= " << (-b - sqrt(c)) / (2 * a);
}
