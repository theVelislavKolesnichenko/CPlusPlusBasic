#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

float numReal(char num);
float form(float y);

int main()
{
	float y;
	y = numReal('y');
	cout << "x=" <<setprecision(3)<< form(y) << endl;

	return 0;
}
float numReal(char num) {
	float f;
	cout << num << "=";
	cin >> f;
	return f;
}
float form(float y) {
	return (2 * (2 * y + 5)) / (14 - y / 3);
}