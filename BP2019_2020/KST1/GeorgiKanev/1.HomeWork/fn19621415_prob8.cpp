#include <iostream>
using namespace std;

int main() {
	cout << "You are given the following equation x = (2y + 5)(14 - y/3)" << endl;
	float x, y;
	cout << "Pick y = ";
	cin >> y;
	x = (2*y+5)*(14-y/3);
	cout << endl << "Result is: " << x << endl;

	return 0;
}