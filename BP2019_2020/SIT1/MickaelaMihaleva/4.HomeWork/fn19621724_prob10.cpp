#include <iostream>
#include <math.h>
using namespace std;

double fun1(char h);
double fun2(double x);

int main() {
	double x = fun1('x');

	cout << "Izraza e raven na  " << fun2(x) << endl;
	system("pause");
}

double fun1(char h) {
	double b;
	cout << h << " = ";
	cin >> b;
	return b;
}
double fun2(double x) {
	double sum = 0;
	for (int i = 1; i <= 20; i++) {
		sum += pow(x, i) + 1.0 / (2 * i) + 1;
	}
	return sum;
}