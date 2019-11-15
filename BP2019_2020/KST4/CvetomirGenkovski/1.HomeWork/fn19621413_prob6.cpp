#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a;
	int b;
	int c;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	double z = 2 * (a - b) * (a - c);
	cout << z << endl;

	return 0;
}