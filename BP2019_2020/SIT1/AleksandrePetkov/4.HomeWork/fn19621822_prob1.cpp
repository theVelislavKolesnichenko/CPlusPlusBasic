#include <iostream>
#include <math.h>
using namespace std;

double input(char ch);
double func(int a, int c);

int main() {
	int a = input('a');
	int c = input('c');

	if (a + 2 < 0 || c == 0)cout << "Invalid input!" << endl;
	else cout << "y = " << func(a, c) << endl;
}

double input(char ch) {
	double n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
double func(int a, int c) {
	return sqrt(a + 2) - 2 / c;
}
