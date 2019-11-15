#include <iostream>
using namespace std;

float rez(float y);

int main()
{
	float y, x;

	cin >> y;

	x = rez(y);

	cout << x << endl;

	return 0;
}

float rez(float y)
{
	float result;

	result = 2 * (2 * y + 5) / (14 - y / 3);

	return result;
}