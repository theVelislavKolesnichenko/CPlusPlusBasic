#include <iostream>
#include <math.h>
using namespace std;

struct Triangle {
	float x, y, z;
};

Triangle triangle();
float parameter(Triangle t);

int main() {
	Triangle A;
	A = triangle();
	cout << "The parameter of the triangle is = " <<parameter(A) << endl;
	return 0;
}

Triangle triangle() {
	Triangle A;
	cout << "Define the sides of a triangle: " << endl;
	cout << "x = ";
	cin >> A.x;
	cout << "y = ";
	cin >> A.y;
	cout << "z = ";
	cin >> A.z;
	return A;
}

float parameter(Triangle t) {
	float p = t.x + t.y + t.z;
	return p;
}