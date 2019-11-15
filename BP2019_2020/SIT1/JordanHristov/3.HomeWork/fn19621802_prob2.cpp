#include <iostream>
using namespace std;

float max(float a, float b);
int main() {
	float a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "max(" << a << "," << b << ")=" << max(a, b) << endl;

	return 0;
}
float max(float a, float b) {
	if (a > b) {
		return a;
	}
	else { return b; 
	}

}