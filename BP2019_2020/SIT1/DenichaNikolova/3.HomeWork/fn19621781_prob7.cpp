#include <iostream>
using namespace std;

float equation1(float y);
float equation2(float y);

int main()
{
	float y;

	cin >> y;

	if (y <= -5)
	{
		cout << equation1(y) << endl;
	}
	if (y > 5)
	{
		cout << equation2(y) << endl;
	}

	return 0;
}

float equation1(float y)
{
	float x;

	cout << "x = y^3 + (y^2 + 2y)" << endl;
	x = y * y * y + (y * y + 2 * y);

	return x;
}

float equation2(float y)
{
	float x;

	cout << "x = 2(2y + 5)/(14 - y/3)" << endl;
	x = 2 * (2 * y + 5) / (14 - y / 3);

	return x;
}