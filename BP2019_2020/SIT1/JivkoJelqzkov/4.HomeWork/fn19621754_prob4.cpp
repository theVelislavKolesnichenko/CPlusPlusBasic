#include <iostream>
#include <math.h>
using namespace std;
void calc(float a, float b, float d);
int main() {
	float a, b, d;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "d=";
	cin >> d;
	calc(a, b, d);
}
void calc(float a, float b, float d) {
	float det= pow(b, 2) - 4 * a * d;
	if (det > 0) {
		cout << "x=" << -b + (sqrt(pow(b, 2) - 4 * a * d)) / 2 * a<<endl;
		cout << "y=" << -b - (sqrt(pow(b, 2) - 4 * a * d)) / 2 * a<<endl;
	}
	else {
		if (det == 0) {
			cout << "x=y=" << -b / 2 * a;
		}
		else {
			float imaginary = sqrt(-det) / 2 * a;
			cout << "x=" << (-b/2*a) + imaginary*((sqrt(pow(b, 2) - 4 * a * d) / 2 * a))<<endl;
			cout << "y=" << (-b / 2 * a) - imaginary * ((sqrt(pow(b, 2) - 4 * a * d) / 2 * a)) << endl;
		}
	}
}