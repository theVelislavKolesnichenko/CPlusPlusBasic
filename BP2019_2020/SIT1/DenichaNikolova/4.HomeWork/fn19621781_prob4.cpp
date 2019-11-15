#include <iostream>

using namespace std;

float roots(float b, float d);


int main()
{
	float b, d;
	cout << "Enter 2 numbers:" << endl;
	//cin >> a;
	cin >> b;
	cin >> d;

	cout << roots(b, d) << endl;

	//a2+2ba+d=0
	//discriminant = 2*b*2*b - 4 * 1 * d;

	return 0;
}

float roots(float b, float d)
{
	float discriminant = 2 * b * 2 * b - 4 * 1 * d;
	float x1;
	float x2;
	if (discriminant > 0) 
	{
		x1 = ((-2)*b + sqrt(discriminant)) / (2 * 1);
		x2 = ((-2)*b - sqrt(discriminant)) / (2 * 1);
		cout << "Roots are real and different." << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}

	else if (discriminant == 0) 
	{
		cout << "Roots are real and same." << endl;
		x1 = (-2*b + sqrt(discriminant)) / (2 * 1);
		cout << "x1 = x2 =" << x1 << endl;
	}
	else
	{
		cout << "Roots are not real." << endl;
	}

	return 0;
}