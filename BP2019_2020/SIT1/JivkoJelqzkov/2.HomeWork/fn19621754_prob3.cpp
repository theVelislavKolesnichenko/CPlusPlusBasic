#include <iostream>
using namespace std;
void inpt(float& a);
float average(float a, float b, float c, float d);
int main() {
	float x, y, z, g;
	inpt(x);
	inpt(y);
	inpt(z);
	inpt(g);
	cout << average(x, y, z, g);
	
}
void inpt(float& a) {
	cout << "enter a value:";
	cin >> a;
}
float average(float a, float b, float c, float d) {
	return (a + b + c + d) / 4;
}