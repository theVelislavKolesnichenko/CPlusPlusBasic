#include <iostream>
using namespace std;

void X(double a[]);

int main()
{
	double a[10];
	for (int i = 0; i < 10; i++)
	{
		int temp;
		cin >> temp;
		a[i] = temp;
	}
	X(a);
	return 0;
}

void X(double a[])
{
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > 0)count1++;
		else count2++;
	}
	cout << endl << count1 << " Positive numbers";
	cout << endl << count2 << " Negative numbers";
}