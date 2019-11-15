#include <iostream>
using namespace std;

int Average(int a, int b, int c, int d);

int main()
{
	int number_1, number_2, number_3, number_4;
	cout << "Enter 4 integer numbers:\n";
	cin >> number_1 >> number_2 >> number_3 >> number_4;

	cout << Average(number_1, number_2, number_3, number_4);

	return 0;
}

int Average(int a, int b, int c, int d)
{
	int averageValue = (a + b + c + d) / 4;

	return averageValue;
}