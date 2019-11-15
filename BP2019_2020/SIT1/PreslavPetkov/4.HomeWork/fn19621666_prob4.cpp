#include <iostream>
#include <math.h>
using namespace std;
void sum(double a, double b, double d);
int main() {
	double a, b, d, c;
	while (true) {
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "d=";
		cin >> d;
		sum(a, b, d);
	}
}
void sum(double a, double b, double d) {
	int x = 0;
	x = pow(a, 2) + 2 * b * a + d;
	cout << "x=" << x << endl;
	/*за квадратно уравнение е нужно да има x който е неизвестен, тогава за да се намерят корени ф-та ще изглежда така
	a*pow(x,2)+2*b*x+d=0
	int c, x1, x2;
	c = pow(b, 2) - 4 * a * d;
	if (c > 0) {
		x1 = (-b + sqrt(c)) / 2 * a;
		x2 = (-b - sqrt(c)) / 2 * a;
		cout << "x1=" << x1 << endl << "x2=" << x2 << endl;
	}
	else if (c == 0) {
		x1 = -b / 2 * a;
		cout << "x1=" << x1 << endl;
	}
	else {
		cout << "Nqma koreni"<<endl;
	}*/
}