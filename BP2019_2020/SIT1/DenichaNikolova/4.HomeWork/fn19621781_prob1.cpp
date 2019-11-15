#include <iostream>

using namespace std;

float equation(float a, float c);


int main()
{
	float a, c;

	cin >> a;
	cin >> c;

	if (a < 0 || c==0)
	{
		cout << "Invalid input";
	}
	else
	{
		cout << equation(a, c) << endl;
	}

	return 0;
}
float equation(float a, float c)
{
	float y;

    y = sqrt(a + 2) - 2 / c;

	return y;

 }