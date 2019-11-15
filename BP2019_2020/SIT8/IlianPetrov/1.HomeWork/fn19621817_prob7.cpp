#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double a, c;
	double y;

	cout << "a=";
	cin >> a;
	cout << "c=";
	cin >> c;

	y = sqrt(a + 2) - c * 2;
	cout << "y=" << y << endl;
	return 0;
}