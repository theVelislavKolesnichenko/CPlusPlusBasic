#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b;
	cout << "Въведете две числа: " << endl;
	cin >> a >> b;
	double x;
	x = (a + b) ^ 3 + (a^2 + 2 * b * a - 2 * a * b + b^2);
	cout << x;
	return x;
}