#include <iostream>
#include <math.h>
using namespace std;
double Y(int x);

int main() {
	int x;
	do {
		cout << "x= ";
		cin >> x;
	} while ((x < -100) || (x > 100));
	cout << Y(x) << endl;

	return 0;
}
double Y(int x) {
	int y;
	if (x < 0) {
		y = sqrt(pow(x, 2) + 1);
	}
	else if (x >= 0) {
		y = (x + 10) / (x - 20);
	}
	return y;
}