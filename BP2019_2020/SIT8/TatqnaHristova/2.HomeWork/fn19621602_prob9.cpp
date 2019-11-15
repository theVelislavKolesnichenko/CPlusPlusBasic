#include <iostream>
using namespace std;

struct Area {
	float a, b, c;
};
float nAr(char ch);
float area(float x, float y, float z);

int main() {
	Area A;
	float x, y, z;
	x = nAr('A.a');
	y = nAr('A.b');
	z = nAr('A.c');
	cout << "Area= " << area(x, y, z) << endl;

	return 0;
}
float nAr(char ch) {
	float f;
	cout << ch << "=";
	cin >> f;
		return f;
}
float area(float x, float y, float z) {
	return x + y + z;
}