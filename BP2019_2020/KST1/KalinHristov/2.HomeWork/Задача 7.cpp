#include <iostream>
#include <math.h>
using namespace std;
float sum(float a)
{
	float sum = 2*(2*a + 5) / (14 - a)/ 3;
	return sum;
}
int main()
{
	float a, b;
	cout << "Presmqtame X za koito X = 2(2y + 5)/(14 - y/3)" << endl;
	cin >> a;
	cout << "kato izpolzvame vuvedenoto chislo X=" << sum(a);
}