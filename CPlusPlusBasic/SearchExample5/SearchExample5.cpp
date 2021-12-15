#include <iostream>
using namespace std;

int sumEven(int a[], int count);

int main()
{
	int array[7] = { 1, 2, 3, 30, 1, 70, 4 };

	int sum = sumEven(array, 7);

	cout << "Sum of even number is: " << sum << endl;
}

int sumEven(int a[], int count)
{
	int sum = 0;

	for (int index = 0; index < count; index++)
	{
		if (a[index] % 2 == 0) {
			sum += a[index];
		}
	}

	return sum;
}
