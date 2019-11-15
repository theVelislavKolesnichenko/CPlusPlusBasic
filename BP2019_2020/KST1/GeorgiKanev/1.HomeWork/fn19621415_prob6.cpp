#include <iostream>
#include <math.h>
using namespace std;

int main() {
	cout << "You are given the following equation z = 2(a-b)(a-c)" << endl;
	float a, b, c, z;
	cout << "Pick a= ";
	cin >> a;
	cout << endl << "Pick b= ";
	cin >> b;
	cout << endl << "Pick c= ";
	cin >> c;
	z = 2 * (a - b) * (a - c);
	cout << "Result is: " << z << endl;

	return 0;
}