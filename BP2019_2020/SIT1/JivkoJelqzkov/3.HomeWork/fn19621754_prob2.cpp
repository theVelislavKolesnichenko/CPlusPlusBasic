#include <iostream>
using namespace std;
float compare(float a, float b) {
	if (a > b) {
		return a;
	}
	else return b;
}
int main() {
	float x, y;
	cout << "a=";
	cin >> x;
	cout << "b=";
	cin >> y;
	cout << "The bigger number is :" << compare(x, y);
}