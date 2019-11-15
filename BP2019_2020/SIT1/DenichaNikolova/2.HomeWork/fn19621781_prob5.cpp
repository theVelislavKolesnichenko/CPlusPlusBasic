#include <iostream>
using namespace std;

float rez(float a, float b);

int main()
{
	float a, b, x;

	cin >> a >> b;

	x = rez(a, b);

	cout << x << endl;

	return 0;
}

float rez(float a, float b)
{
	float result;

	result = 2*((a-b) / (b-a));

	return result;
}