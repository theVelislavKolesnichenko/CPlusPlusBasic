#include <iostream>
#include <math.h>
using namespace std;
void calc(float a, float c);
int main() {
	float a, c;
	cout << "a=";
	cin >> a;
	cout << "c=";
	cin >> c;
	calc(a, c);


}
void calc(float a, float c) {
	if (a < 0 || c == 0) {
		cout << "Invalid Input";
	}
	else cout << "y=" << sqrt(a + 2) - 2 / c;
}