#include <iostream>
#include <iomanip>
using namespace std;
const int a=837;
double units(double u);
double tens(double t);
double hundreds(double h);
int main() {
	cout << a << endl;
	cout << "Units" << setw(2) << units(a) << endl;
	cout << "Tens" << setw(2) << tens(a) << endl;
	cout << "Hundreds" << setw(2) << hundreds(a) << endl;
	return 0;
}
double units(double u) {
	return a % 10;
}
double tens(double t) {
	return (a / 10) % 10;
}
double hundreds(double h) {
	return (a / 100) % 10;
}