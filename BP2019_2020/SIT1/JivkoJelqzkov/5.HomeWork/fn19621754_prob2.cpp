#include <iostream>
using namespace std;
int calc(int a);
int main() {
	double a;
	cout << "a=";
	cin >> a;
	if (a > 2147483647 || a < (-2147483647)) {
		cout << "Wrong Input";
	}
	else {
		cout << "Number of digits:" << calc(a);
	}

}
int calc(int a) {
	int i = 0;
	while (a != 0) {
		a = a / 10;
			i++;
	}
	return i;
}