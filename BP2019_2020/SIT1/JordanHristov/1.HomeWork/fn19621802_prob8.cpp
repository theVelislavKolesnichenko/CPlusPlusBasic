#include <iostream>
using namespace std;

int main() {
	int y;
	float x;
	cout << "y= ";
	cin >> y;

	x = (2 * y + 5) / (14 - y/3);
	cout << "x= " << x;

	return 0;
}