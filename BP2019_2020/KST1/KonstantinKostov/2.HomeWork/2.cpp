#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	double a, b, c;
	cout << "Въвеете две числа:" << endl;
	cin >> a >> b;
	c = a + b;
	cout << a << "+" << b << "=" << c<<endl;
	c = a - b;
	cout << a << "-" << b << "=" << c << endl;
	c = a / b;
	cout << a << "/" << b << "=" << c << endl;
	c = a * b;
	cout << a << "*" << b << "=" << c;
	return 0;
}


