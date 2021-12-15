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
		if (a[index] == n) 
		{
			return true;
		}
		index++;
	}
	return false;
}

//int a[length] = { 1,2,3,30,1,70,4 }; 9
bool search1(int a[], int length, int number)
{
	int i = 0;
	do
	{
		if (a[i] == number)
		{
			return true;
		}
		i++;
	} while (i < length);

	return false;
}

bool search2(int a[], int length, int number)
{

	for (int i = 0; i < length; i++)
	{
		if (a[i] == number)
		{
			return true;
		}
	}

	return false;
}

bool searchv3(int a[], int length, int n)
{
	while (0 <= --length)
	{
		if (a[length] == n) {
			return true;
		}
	}
	return false;
}

//int a[length] = { 1,2,3,30,1,70,4 }; 9
bool search4(int a[], int length, int number)
{
	bool exist = false;
	int i = 0;
	do
	{
		if (a[i] == number)
		{
			exist != exist;
		}
		else
		{
			i++;
		}
	} while (!exist || length > i);
}