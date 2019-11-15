#include <iostream>
using namespace std;

float rez_sum(float a, float b);
float rez_izv(float a, float b);
float rez_div(float a, float b);
float rez_mul(float a, float b);

int main()
{
	float a, b, c, d, e, f, g, h, x, y, z, t;

	cin >> a >> b;
	x = rez_sum(a, b);
	cout << a<< "+" << b << "=" << x << endl;

	cin >> c >> d;
	y = rez_izv(c, d);
	cout << c << "-" << d << "=" << y << endl;

	cin >> e >> f;
	z = rez_div(e, f);
	cout << e << "/" << f << "=" << z << endl;

	cin >> g >> h;
	t = rez_mul(g, h);
	cout << g << "*" << h << "=" << t << endl;

	return 0;
}
float rez_sum(float a, float b)
{
	float result;

	result = a + b;

	return result;
}
float rez_izv(float a, float b)
{
	float result;
	result = a - b;

	return result;
}

float rez_div(float a, float b)
{
	float result;
	result = a / b;

	return result;
}
float rez_mul(float a, float b)
{
	float result;
	result = a * b;

	return result;
}