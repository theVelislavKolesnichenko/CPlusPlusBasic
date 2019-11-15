#include <iostream>
#include <math.h>
using namespace std;
void calc(float y) {
	if (y <-5) {
		cout << "The result is :" << pow(y, 3) + (pow(y, 2) + 2 * y);
	}
	else {
		if (y >5) {
			cout << "The result is :" << 2 * (2 * y + 5) / (14 - y / 3);
		}
		else cout << "Wrong Input";
	}
}
int main() {
	float y;
	cout << "y=";
	cin >> y;
	calc(y);
}