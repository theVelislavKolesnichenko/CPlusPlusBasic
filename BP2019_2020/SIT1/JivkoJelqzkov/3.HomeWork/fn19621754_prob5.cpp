#include <iostream>
#include <math.h>
using namespace std;
float calc(float y) {
	if (y < 1) {
		return pow(y, 3) + (pow(y, 4) + 2 * y);
	}
	else {
		return 2 * (2 * y + 5) / (14 - y / 3);
	}
}
int main() {
	float y;
	cout << "y=";
	cin >> y;
	cout << "The result is :" << calc(y);
}