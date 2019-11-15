#include <iostream>
using namespace std;
void inpt(float& a);
float xform(float a);
int main() {
	float x, y;
	inpt(x);
	inpt(y);
	cout << "a=" << xform(x)<<endl;
	cout << "b= " << xform(y);
}
void inpt(float &a) {
	cout << "Enter a value:";
	cin >> a;
}
float xform(float a) {
	return 2 * (2 * a + 5) / (14 - a / 3);
}