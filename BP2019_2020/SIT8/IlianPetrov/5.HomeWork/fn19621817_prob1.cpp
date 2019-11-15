#include <iostream>
using namespace std;
double Mn(double x, double y);

int main()
{
	int x, z;
	int y = 1;
	do {
		cout << "x= ";
		cin >> x;
		if (x > 0) {
			z = Mn(x, y);
		}

		cout << z << endl;
	} while (x > 0);
	return 0;
}
double Mn(double x, double y)
{
	double s;
	return s= x * y;
	return s;
}