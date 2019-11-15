#include <iostream>
using namespace std;

struct Lice {
	float a, b;
};
float nLi(char ch);
float lice(float x, float y);

int main() {
	Lice A;
	float x, y;
	x = nLi('A.a');
	y = nLi('A.b');
	cout << "S= " << lice(x, y) << endl;

	return 0;
}
float nLi(char ch) {
	float f;
	cout << ch << "= ";
	cin >> f;
	return f;
}
float lice(float x, float y) {
	return x *y;
}