#include <iostream>
#include <math.h>
using namespace std;

float izchislenie(float y);
int main() {
	float y;
	cout << "y=";
	cin >> y;
	cout << "x=" << izchislenie(y);

	return 0;
}
float izchislenie(float y) {
	if (y<=-5) {
		return pow(y, 3) + (pow(y, 2) + 2 * y);
	}
	else if (y>5) {
		return 2 * (2 * y + 5) / (14 - y / 3);
	}
}