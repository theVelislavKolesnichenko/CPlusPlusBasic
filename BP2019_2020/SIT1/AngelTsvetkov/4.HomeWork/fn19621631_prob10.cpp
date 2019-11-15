#include <iostream>
#include <math.h>
using namespace std;
void smetki(int x);
int main()
{
	double x;
	cout << "x = ";
	cin >> x;
	smetki(x);
	return 0;
}
void smetki(int x)
{
	for (double n = 1; n <= 20; n++)
	{
		cout << (pow(x, n) + 1 / (2 * n) + 1) << endl;
	}
}