#include <iostream>
#include <math.h>
using namespace std;
#define AVRG(a,b,c) (a,b,c)/3
int main()
{
	float a = 2, b = 7, c = 2;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "AVRG(a,b,c)=" << AVRG(a, b, c) << endl;
	return 0;

}