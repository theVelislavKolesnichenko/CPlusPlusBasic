#include <iostream>
#include <conio.h>
using namespace std;

double bl(double y);

int main() {
	
	double y, x;
	cout << "Vuvedete y = ";
	cin >> y;
	cout << "Reshenieto na zadachata e: " << bl(y) << endl;
	return 0;
}

double bl(double y) {
	return (2 * (2 * y + 5) / (14 - y) / 3);
}