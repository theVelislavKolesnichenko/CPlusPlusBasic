#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double y;
	cout << "y= ";
	cin >> y;
	y = (2 * y + 5) / (14 - y / 3);
	cout << "y= " << y;
	system("pause");
	return 0;
}