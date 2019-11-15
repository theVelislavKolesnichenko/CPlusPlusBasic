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
	if (a <= 0) {
		return (pow(a, 3) / 4 + 1);

	}
	else return sqrt((a-4));



}