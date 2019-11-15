#include <iostream>
using namespace std;

float uravnenie(float y);

int main()
{
	float f;
	cin >> f;

	if (f == 0)
	{
		cout << "You cannot divide by zero" << endl;
	}
	else
	{
		cout << uravnenie(f) << endl;
	}
	return 0;
}

float uravnenie(float y)
{
	float x;
	x = 20/y;
	return x;
}