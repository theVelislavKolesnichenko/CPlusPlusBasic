#include <iostream>
#include <math.h>
using namespace std;

float Mul(float a, float b);

int main() {
	float a, b;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;

	cout << "x= " << Mul(a,b) << endl;
	return 0;
}

float Mul(float a, float b)
{
	return (pow(a + b, 3) + (pow(a, 2) + 2 * b * a - 2 * a * b + pow(b, 2)));

}