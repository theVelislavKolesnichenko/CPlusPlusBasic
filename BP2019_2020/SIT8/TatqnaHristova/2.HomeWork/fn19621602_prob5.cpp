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
	cin>> f;
	return f;
}
float form(float a, float b) {
	return 2 * ((a - b) / (b - a));
}