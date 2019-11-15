#include <iostream>
#include <math.h>

using namespace std;

float numReal(char num);
float form(float a, float b);

int main()
{
	float a, b;
	a = numReal('a');
	b = numReal('b');
	cout << "x=" << form(a, b) << endl;

	return 0;
}
float numReal(char num) {
	float f;
	cout << num << "=";
	cin >> f;
	return f;
}
float form(float a, float b) {
	return (pow(a + b, 3)) + (pow(a, 2) + 2 * b * a - 2 * a * b + pow(b, 2));
}