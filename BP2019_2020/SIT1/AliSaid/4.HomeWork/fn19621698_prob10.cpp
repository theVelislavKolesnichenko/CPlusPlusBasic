#include <iostream>
#include <math.h>
using namespace std;

void Find_Sum()
{
	double v=0, n, x;
	cout << "Enter x: ";
	cin >> x;
	for (n = 1; n <= 20; n++)
	{
		v += (pow(x,n) + 1)/2*n+1;
	}
	cout << "V = " << v;
}

int main()
{
	Find_Sum();

	return 0;
}