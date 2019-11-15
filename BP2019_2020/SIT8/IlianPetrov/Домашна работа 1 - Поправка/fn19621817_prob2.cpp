#include <iostream>
using namespace std;

int main() {
	double a;
	double b;
	double c;
	double d;

	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;

	d = double((a + b + c) / 3);
	cout << "d=" << d << endl;
	return 0;
}