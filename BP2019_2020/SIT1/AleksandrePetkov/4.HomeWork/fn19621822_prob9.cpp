#include <iostream>
using namespace std;

bool isLeapYear(int year);

int main() {
	int year;

	cout << "Input Years: " << endl;
	do {
		cin >> year;
		if (isLeapYear(year))cout << "Leap year" << endl;
		else cout << "Not a leap year" << endl;
	} while (year >= 0);
}

bool isLeapYear(int year) {
	if (year%4 == 0 && (year%100 != 0 || year%400 == 0)) return true;
	else return false;
}