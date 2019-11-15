#include <iostream>
using namespace std;

int units(int number);
int tens(int anumber);
int hundreds(int number);

int main() {
	int a = 837;
	cout << "Number is: " << a << endl;
	cout << "Units = " << units(a) << endl;
	cout << "Tens = " << tens(a) << endl;
	cout << "Hundreds = " << hundreds(a) << endl;

	return 0;
}

int units(int number) {
	int unit = number % 10;
	return unit;
}

int tens(int number) {
	int ten = (number / 10) % 10;
	return ten;
}

int hundreds(int number) {
	int hundred = (number / 100) % 10;
	return hundred;
}