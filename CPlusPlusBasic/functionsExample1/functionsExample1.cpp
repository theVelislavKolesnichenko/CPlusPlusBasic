#include <iostream>
using namespace std;

int sum(int a, int b);
int sum1(int a, int b);
int sum2(int a, int b);

void main()
{
	int number1, number2;
	cin >> number1 >> number2;

	int result = sum(number1, number2);

	cout << sum(number1, number2) << endl;

	cout << result << endl;
}

// aa = number1; bb = number2;
int sum(int aa, int bb)
{
	int c = sum1(aa, bb);

	return c;
}

int sum1(int aa, int bb)
{
	int c = sum2(aa, bb);

	return c;
}

int sum2(int aa, int bb)
{
	int c = aa + bb;

	return c;
}
