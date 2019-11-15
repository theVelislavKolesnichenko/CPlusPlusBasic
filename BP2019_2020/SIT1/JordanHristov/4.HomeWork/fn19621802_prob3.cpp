#include <iostream>
#include <math.h>
using namespace std;

void nok(float a, float b);
float nod(float a, float b);
int main() {
	float a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	nok(a,b);
	cout << "NOD(" << a << "," << b << ")="<<nod(a,b) << endl;
	return 0;
}
void nok(float a, float b) {
	float x = a;
	float y = b;

	while (x != y)
	{
		if (x > y)
			x -= y;
		else
			y -= x;
	}
	float nok = (a * b) / x;
	cout << "NOK("<<a<<","<<b<<")=" << nok<<endl;
}
float nod(float a, float b) {
	if (a == 0 || b == 0)
		return 0;
	else if (a == b)
		return a;
	else if (a > b)
		return nod(a - b, b);
	else if (a < b) return nod(a, b - a);

}