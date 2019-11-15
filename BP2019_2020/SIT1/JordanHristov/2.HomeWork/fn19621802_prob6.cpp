#include <iostream>
#include <math.h>
using namespace std;

float chislo(char ch);
float izchislenie(float a, float b);
int main() {
	float a, b;
	a = chislo('a');
	b = chislo('b');
	cout << "x= " << izchislenie(a, b);

	return 0;
}
float chislo(char ch) {
	float x;
	cout << ch << "=";
	cin >> x;
	return x;
}
float izchislenie(float a, float b) {
	return pow((a + b), 3) + (pow(a, 2) + 2 * b * a -2 * a * b + pow(b, 2));
}