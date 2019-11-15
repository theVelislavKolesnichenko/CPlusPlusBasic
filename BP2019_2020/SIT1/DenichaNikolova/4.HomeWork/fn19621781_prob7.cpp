#include <iostream>

using namespace std;

void pos_neg(int number);

int main()
{
	int n = 0;

	pos_neg(n);

	return 0;
}

void pos_neg(int number)
{
	int i = 0;
	int count_positive = 0;
	int count_negative = 0;

	while (i < 10)
	{
		cin >> number; i++;

		if (number > 0) { count_positive++; }
		if (number < 0) { count_negative++; }
	}

	cout << "Count of positive numbers: " << count_positive << endl;
	cout << "Count of negative numbers: " << count_negative << endl;

}