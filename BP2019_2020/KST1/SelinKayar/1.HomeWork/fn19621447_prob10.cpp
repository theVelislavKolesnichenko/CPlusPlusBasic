#include <iostream>
using namespace std;
int main()
{
	float a, b, S, P; // a one side, b second side, S area, P perimeter
	cout << "Lenght of the rectangle= ";
	cin >> a;
	cout << "Width of the rectangle= ";
	cin >> b;

	P = 2 * (a + b);

	S = a * b;

	cout << "Perimeter of the rectangle= " << P << endl;
	cout << "Area of the rectangle= " << S << endl;


	return 0;
}