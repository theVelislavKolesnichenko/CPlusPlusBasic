#include <iostream>
using namespace std;

float average(float a, float b, float c, float d)
{
	float r;
	r = (a + b + c + d) / 4;
	return r;
}

int main()
{
	float a, b, c, d, z;
	cout << "Enter 4 numbers: ";
	cin >> a >> b >> c >> d;
	z = average(a, b, c, d);
	cout << "Average is= " << z << endl;
	return 0;
}
