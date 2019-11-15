#include <iostream>
#include <math.h>
using namespace std;

double inDouble(char a) {
	double n;
	cout << a << " = ";
	cin >> n;
	return n;
}
double func(double a, double b) {
	return pow(a+b,3)+(pow(a,2)+2*b*a-2*a*b+pow(b,2));
}

int main() {
	double a = inDouble('a');
	double b = inDouble('b');
	cout << "x = " << func(a,b) << endl;
}