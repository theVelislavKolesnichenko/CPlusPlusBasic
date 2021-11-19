#include <iostream>
using namespace std;

bool search(int a[], int length, int n);

int main()
{
	const int length = 7;
	int a[length] = { 1,2,3,30,1,70,4 };
	int n;
	cout << "Enter number: ";
	cin >> n;

	bool result = search(a, length, n);

	if (result)
	{
		cout << "exists" << endl;
	}
	else
	{
		cout << "no exists" << endl;
	}
}

bool search(int a[], int length, int n) 
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

bool searchv2(int a[], int length, int n)
{
	while (0 <= --length)
	{
		if (a[length] == n) {
			return true;
		}
	}
	return false;
}