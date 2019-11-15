#include <iostream>
#include <math.h>
using namespace std;

int main() {
	cout << "You are given the following equation y = sqrt(a+2) - 2*c" << endl;
	float a, c, y;
	cout << "Pick a = ";
	cin >> a;
	cout << endl << "Pick c = ";
	cin >> c;
	y = sqrt(a + 2) - c * 2;
	cout << endl << "Result is: " << y << endl;

	return 0;
}
