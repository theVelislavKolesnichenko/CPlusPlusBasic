#include <iostream>
#include <math.h>
using namespace std;
float sum(float a, float b)
{
	float sum = pow((a + b),3) + (a*a + 2*b*a-2*a*b+b*b);
	return sum;
}
int main()
{
	float a, b;
	cout << "Presmqtame X za koito X = (a+b)3 + (a2 + 2ba – 2ab + b2)" << endl;
	cin >> a;
	cin >> b;
	cout << "kato izpolzvame vuvedenite chisla X=" << sum(a, b);
}