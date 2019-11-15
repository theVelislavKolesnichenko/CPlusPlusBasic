#include <iostream>
#include <cmath>
using namespace std;
int funct(int x)
{
	int v=0,v1=0;
	double n=1;
	for (n;n <= 20;n++)
	{
		v1 = pow(x, n) + 1 / 2 * n + 1;
		v = v + v1;
	}
	return v;
}
int main()
{
	int x;
	cin >> x;
	cout << funct(x) << endl;
	return 0;
}