#include <iostream>
using namespace std;

float suma(float x);
int main() {
	float x=0;
	cout << "v=" << suma(x) << endl;
	return 0;
}
float suma(float x) {
	float v = 0;
		for (int n=1;n < 21;n++) {
			cout << "x=";
			cin >> x;
			v = v + (pow(x, n) + 1 / 2 * n + 1);
			cout << v << endl;

		}
		return v;
}
