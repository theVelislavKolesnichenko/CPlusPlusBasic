#include <iostream>
using namespace std;

int count(int a[], int length, int n);

int main()
{
	//const int length = 7;
	int a[] = { 1,2,3,30,1,70,4 };
	int n;
	cout << "Enter number: ";
	cin >> n;

	int result = count(a, sizeof(a) / sizeof(*a), n);

	cout << "Number " 
		 << n 
		 << " exists " 
		 << result 
		 << " times in the array" 
		 << endl;
}

int count(int a[], int length, int n)
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (n == a[i]) 
		{
			count++;
		}
	}
	return count;
}