#include <iostream>
#include <math.h>
float float_in(char ch);
float prob(float a, float b);
using namespace std;

int main() {
	float a, b;
	a = float_in('a');
	b = float_in('b');
	cout << "x = (a + b)³ + (a² + 2ba – 2ab + b²)" << "\nx = " << prob(a, b);


	return 0;
}
float float_in(char ch) {
	float n;
	cout << ch << "=";
	cin >> n;
	return n;
}
float prob(float a, float b) {
	return pow((a + b), 3) + (pow(a, 2) + 2 * b * a - 2 * a * b + pow(b, 2));
}