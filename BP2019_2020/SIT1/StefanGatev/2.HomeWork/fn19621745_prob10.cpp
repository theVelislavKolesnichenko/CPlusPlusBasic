#include <iostream>
using namespace std;
struct Rectangle {
	float a, b;
};
float lice(Rectangle A);
Rectangle input();

int main() {
	Rectangle A = input();
	cout << "lice=" << lice(A) << endl;
	return 0;
}

Rectangle input() {
	Rectangle A;
	cout << "a=";
	cin >> A.a;
	cout << "b=";
	cin >> A.b;
	return A;
}

float lice(Rectangle A) {
	return (A.a * A.b);
}