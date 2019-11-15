#include<iostream>
#include<math.h>
using namespace std;
double Max(double a, double b);
double Min(double a, double b);
int main()

{

	double a, b;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;

	cout << "NOD= " << Max(a, b) << endl;
	cout << "NOK= " << Min(a, b) << endl;
	return 0;
}
double Max(double a, double b) {
	while (a != b) {
		if (a < b) {
			swap(a, b);
		}
		a -= b;
	}
	return b;
}
double Min(double a, double b) {
	while (a != b) {
		if (b < a) {
			swap(a, b);
		}
		b -= a;
	}
	return b;
}