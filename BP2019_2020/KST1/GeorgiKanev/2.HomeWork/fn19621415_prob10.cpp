#include <iostream>
#include <math.h>
using namespace std;

struct Rectangle {
	float x, y;
};

Rectangle rectangle();
float area(Rectangle t);

int main() {
	Rectangle A;
	A = rectangle();
	cout << "The area of the rectangle is = " << area(A) << endl;
	return 0;
}

Rectangle rectangle() {
	Rectangle A;
	cout << "Define the sides of a rectangle: " << endl;
	cout << "x = ";
	cin >> A.x;
	cout << "y = ";
	cin >> A.y;
	return A;
}

float area(Rectangle t) {
	float s = t.x * t.y;
	return s;
}