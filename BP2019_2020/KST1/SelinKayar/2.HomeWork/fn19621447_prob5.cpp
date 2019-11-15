#include <iostream>
using namespace std;

float division(float a, float b)
{
	float z;
	z = (a - b) / (b - a);
	return z;
}
int main()
{
	float a, b, x;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	x = 2 * division(a, b);
	cout << "Result= " << x << endl;
	return 0;

}