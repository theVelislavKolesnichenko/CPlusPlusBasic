#include <iostream>
using namespace std;

double Sum(double a[3]);

int main()
{
	double a[3];
	while (true)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> a[i];
			if (i == 1 && a[i] == 0 && a[i - 1] == 0)break;
		}
		if (a[0] == 0 && a[1] == 0) break;
		cout << Sum(a) << endl;
	}
	return 0;
}

double Sum(double a[3])
{
	double sum = 0;
	for (int i = 0; i < 3; i++)
		sum += a[i];
	return sum;
}