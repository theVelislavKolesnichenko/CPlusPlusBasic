#include <iostream>
#include <math.h>
using namespace std;
float calc(float a);
int main() {
	float a;
	do {
		cout << "a=";
		cin >> a;
	} while (a > 100 || a < (-100));
	cout << "The result is :" << calc(a);



}
float calc(float a) {
	if (a >= 0) {
		return (a + 10) / (a - 20);

	}
	else return sqrt(pow(a, 2) + 1);



}