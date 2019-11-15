#include <iostream>
#include <math.h>
using namespace std;
#define DIV(a,b) (a-b)
int main()
{
	int a = 7;
	int b = 4;
	int c = 2;
	int z;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "z=2*(a-b)*(a-c)" << endl;
	z = 2 * (a - b) * (a - c);
	cout << "z=" << z << endl;
	return 0;


}