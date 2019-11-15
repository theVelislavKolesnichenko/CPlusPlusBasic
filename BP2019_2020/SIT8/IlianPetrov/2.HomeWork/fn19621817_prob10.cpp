#include <iostream>
using namespace std;

struct line {
	double a, b;
}line;
float S(float a, float b);
int main() {
	float a, b, S;
	cout << "line.a= ";
	cin >> line.a;
	cout << "line.b= ";
	cin >> line.b;

	S = float(a * b);
	cout << "S= " << S << endl;
	return 0;
}
float S(float a, float b)
{
	double result;
	result = a * b;
	return result;
}