#include <iostream>

using namespace std;

struct Triangle {
	double sideA, sideB, sideC;
};

Triangle newTriangle();
double getPerimeter(Triangle);

int main()
{
	Triangle tri1 = newTriangle();

	cout<<("Perimeter: %.2f\n", getPerimeter(tri1));

	return 0;
}

Triangle newTriangle() {
	Triangle x;
	cout<<("Side A: ");
	cout<<("%lf", &x.sideA);
	cout<<"Side B: ");
	cout<<("%lf", &x.sideB);
	cout<<("Side C: ");
	scanf_s("%lf", &x.sideC);

	return x;
}

double getPerimeter(Triangle x) {
	return x.sideA + x.sideB + x.sideC;
}
