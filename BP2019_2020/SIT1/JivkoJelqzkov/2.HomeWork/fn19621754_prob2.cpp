#include <iostream>
using namespace std;
float SUM(float a, float b);
float SUB(float a, float b);
float MUL(float a, float b);
float DEL(float a, float b);
void inpt(float &a);
int main() {
	float x, y;
	inpt(x);
	inpt(y);
	cout << SUM(x, y) << endl;
	cout << SUB(x, y) << endl;
	cout << MUL(x, y) << endl;
	cout << DEL(x, y) << endl;


}
float SUM(float a, float b) {
	return a + b;
}
float SUB(float a, float b) {
	return a - b;
}
float MUL(float a, float b) {
	return a * b;
}
float DEL(float a, float b) {
	return a / b;
}
void inpt(float &a) {
	cout << "Enter a value: ";
	cin >> a;
	cout << endl;
}