#include <iostream>
#include <iomanip>
using namespace std;

void enterArray(int a[], int length);
void printArray(int a[], int length);
int extractEven(int a[], int length, int even[]);
int extractOdd(int a[], int length, int odd[]);
int removeOdd(int a[], int length);
int insertInStart(int a[], int length);
int insertInEnd(int a[], int length);
int removeLast(int length);

int main()
{
	const int length = 5;
	int a[length], even[length], odd[length];

	enterArray(a, length);
	cout << "All: " << endl;
	printArray(a, length);

	int evenCount = extractEven(a, length, even);
	int oddCount = extractOdd(a, length, odd);

	cout << "\nEven: " << endl;
	printArray(even, evenCount);
	cout << "\nOdd: " << endl;
	printArray(odd, oddCount);

	cout << "\nALL: \n";
	int newLength = removeOdd(a, length);
	printArray(a, newLength);

	if (newLength < length) {
		newLength = insertInStart(a, newLength);
	}

	printArray(a, newLength);

	if (newLength < length) {
		newLength = insertInEnd(a, newLength);
	}

	printArray(a, newLength);

	newLength = removeLast(newLength);
    printArray(a, newLength);
}


void enterArray(int a[], int length)
{
	for (int i = 0; i < length; i++)
	{
		a[i] = i + 1;
	}
}

void printArray(int a[], int length) 
{
	for (int i = 0; i < length; i++)
	{
		cout << setw(3) << a[i] << " ";
		if (i % 10 == 9) 
		{
			cout << endl;
		}
	}
}

int extractEven(int a[], int length, int even[]) 
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (a[i] % 2 == 0) 
		{
			even[count] = a[i];
			count++;
		}
	}
	return count;
}

int extractOdd(int a[], int length, int odd[]) 
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (a[i] % 2 != 0)
		{
			odd[count] = a[i];
			count++;
		}
	}
	return count;
}

int removeOdd(int a[], int length)
{
	int count = length;
	for (int i = 0; i < count; i++)
	{
		if (a[i] % 2 != 0)
		{
			for (int j = i; j < count - 1; j++)
			{
				a[j] = a[j + 1];
			}
			count--;
		}
	}
	return count;
}

int insertInStart(int a[], int length)
{
	int count = length;
	for (int i = count; i > 0; i--)
	{
		a[i] = a[i - 1];
	}
	cout << "Enter number: ";
	cin >> a[0];

	return ++count;
}

int insertInEnd(int a[], int length)
{
	int count = length;
	cout << "Enter number: ";
	cin >> a[count];

	return ++count;
}

int removeLast(int length) 
{
	return --length;
}
