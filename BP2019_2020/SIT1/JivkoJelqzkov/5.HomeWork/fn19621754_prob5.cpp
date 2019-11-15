#include <iostream>
using namespace std;
float calc(float a, int i);
int main() {
	float a[10], S=0;
	for (int i = 0; i <= 9; i++) {
		cout << "a=";
		cin >> a[i];
		S += a[i];
		
	}
	cout << "The average is :" << calc(S, 10);
}
float calc(float a, int i) {
	return a / i;
}