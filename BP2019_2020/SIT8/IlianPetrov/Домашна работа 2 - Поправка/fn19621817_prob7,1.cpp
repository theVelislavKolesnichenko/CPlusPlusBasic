#include <iostream>
#include <math.h>
using namespace std;
float Div(float y);

int main() {
	float y;
	cout << "y= ";
	cin >> y;

	cout << "x= " << Div(y) << endl;
	return 0;
}

float Div(float y)
{
	double s, x;
	s= ((2 * y + 5) / (14 - y / 3));
	x = 2 * s;
	return x;
}