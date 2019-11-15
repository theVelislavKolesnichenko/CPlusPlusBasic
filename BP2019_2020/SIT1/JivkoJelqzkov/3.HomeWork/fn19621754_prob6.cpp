#include <iostream>
#include <math.h>
using namespace std;
void calc(float y) {
	if (y < 87 && y > 58) {
		cout << "The result is :" << pow(y, 3) + (pow(y, 4) + 2 * y);
	}
	else {
		if (y < 58 && y > 15) {
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