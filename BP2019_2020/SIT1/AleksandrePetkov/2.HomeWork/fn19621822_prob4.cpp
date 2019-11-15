#include <iostream>
using namespace std;

int units(int n){
	return n % 10;
}
int tens(int n) {
	n /= 10;
	return n % 10;
}
int hundreds(int n) {
	n /= 100;
	return n % 10;
}

int main() {
	int a = 837;
	cout << "Units: " << units(a) << endl;
	cout << "Tens: " << tens(a) << endl;
	cout << "Hundreds: " << hundreds(a) << endl;
}