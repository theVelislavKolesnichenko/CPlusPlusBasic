#include <iostream>
using namespace std;

bool isPositive(int n);

int main() {
	int countPositive = 0, countNegative = 0;

	cout << "Input 10 numbers: ";
	for (int i = 0; i < 10; i++) {
		int n;
		cin >> n;
		if (isPositive(n)) countPositive++;
		else countNegative++;
	}
	
	cout << "Count of positive numbers = " << countPositive << endl;
	cout << "Count of negative numbers = " << countNegative << endl;
}

bool isPositive(int n) {
	return (n < 0) ? false : true;
}