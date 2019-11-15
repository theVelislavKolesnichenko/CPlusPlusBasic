#include <iostream>
#include <math.h>
using namespace std;
void inpt(float &a);
float xform(float a, float b);
int main() {
	float x, y;
	inpt(x);
	inpt(y);
	cout << xform(x, y);


}
void inpt(float& a) {
	cout << "Enter a value:";
	cin >> a;
}
float xform(float a, float b) {
	return pow((a + b), 3) + (pow(a, 2) + 2*b*a - 2*a*b + pow(b, 2));
}