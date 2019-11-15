#include <iostream>
#include <math.h>
using namespace std;
float calc(float x, float n);
int main() {
	float x;
	
	for (float i = 1; i <= 20; i++) {
		cout << "x=";
		cin >> x;
		cout << "The result is:" << calc(x, i) << endl;
			
	}
}
float calc(float x, float n) {
	return (pow(x, n) + 1) / (2 * n + 1);
}