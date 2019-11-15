#include <iostream>

using namespace std;

struct Rectangle {
	double length, width;
};

Rectangle newRectangle();
double getArea(Rectangle);

int main()
{
	Rectangle rec1 = newRectangle();

	cout<<("Area: %.2f\n", getArea(rec1));

	return 0;
}

Rectangle newRectangle() {
	Rectangle x;
	cout<<("Length: ");
	scanf_s("%lf", &x.length);
	cout<<("Width: ");
	scanf_s("%lf", &x.width);

	return x;
}

double getArea(Rectangle x) {
	return x.length * x.width;
}
