#include <iostream>
#include <math.h>
using namespace std;

void izchislenie(float a, float c);
int main() {
	float a, c;
	cout << "a=";
	cin >> a;
	cout << "c=";
	cin >> c;
	izchislenie(a, c);


	return 0;
}
void izchislenie(float a, float c) {
	float y;
	if ((a + 2) < 0 || c == 0) {
		cout << "Invalid output";
	}
	else {
		cout << "y=" << sqrt(a + 2) - 2 / c;
	}

}