#include <iostream>
using namespace std;
float calc(float a, float b, float c);
int main() {
	float a, b, c;
	do {
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "c=";
		cin >> c;
		if ((a != 0 && b != 0 && c != 0)) {
			cout << "The result is:" << calc(a, b, c) << endl;
		}
	} while(a != 0 && b != 0 && c != 0);
}
float calc(float a, float b, float c) {
	return a + b + c;
}