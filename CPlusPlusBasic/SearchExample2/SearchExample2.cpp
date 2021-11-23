#include <iostream>
using namespace std;

int count(int a[], int length, int n);

int main()
{
	const int length = 7;
	int a[length] = { 1,2,3,30,1,70,4 };
	int n;
	cout << "Enter number: ";
	cin >> n;

	bool result = count(a, length, n);

	cout << "Number " << n << " exists " << result << " times in the array" << endl;
}

int count(int a[], int length, int n)
{
	int index = 0;
	while (index < length)
	{
		if (a[index] == n) {
			return true;
		}
		index++;
	}
	return false;
}