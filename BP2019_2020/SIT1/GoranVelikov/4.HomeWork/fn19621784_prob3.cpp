#include <iostream>
#include <cmath>
using namespace std;
int NOD(int a, int b)
{
	while (b != 0)
	{
		a %= b;
		swap(a, b);
	}
	return a;
}
int NOK(int a, int b)
{
	if (a > b) 
	{
		for (int i = a;i <= a * b;i++) 
		{
			if (i % a == 0 && i % b == 0) { return i; }
		}
	}else
		for (int i = b;i <= a * b;i++)
		{
			if (i % a == 0 && i % b == 0) { return i; }
		}
}

int main()
{
	int a,b;
	cin >> a >> b;
	cout << "HOD=" << NOD(a, b) << endl;
	cout << "HOK=" << NOK(a, b) << endl;
	return 0;
}