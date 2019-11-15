#include <iostream>
using namespace std;
void inpt(float &a);
float xform(float a, float b);
int main() {
	float x, y;
	inpt(x);
	inpt(y); 
	cout << "x="<<xform(x, y);
}
void inpt(float &a) {
	cout << "Enter a value:";
	cin >> a;
}
float xform(float a, float b) {
	return  2*((a-b) / (b-a));
}