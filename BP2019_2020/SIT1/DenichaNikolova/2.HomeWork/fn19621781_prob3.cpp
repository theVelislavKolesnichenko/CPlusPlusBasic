#include <iostream>
using namespace std;

float sredna_stoinost(float a, float b, float c, float d);

int main()
{
	float a, b, c, d, x;

	cin >> a >> b >> c >> d;

	x = sredna_stoinost(a, b, c, d);

	cout << x << endl;

	return 0;
}
float sredna_stoinost(float a, float b, float c, float d)
{
	float result;

	result = (a + b + c + d) / 4;

	return result;
}