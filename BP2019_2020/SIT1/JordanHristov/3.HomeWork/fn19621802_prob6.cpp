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
	if (58<=y<=87) {
		return pow(y, 3) + (pow(y, 4) + 2 * y);
	}
	else if (15<y<58) {
		return 2 * (2 * y + 5) / (14 - y / 3);
	}
}