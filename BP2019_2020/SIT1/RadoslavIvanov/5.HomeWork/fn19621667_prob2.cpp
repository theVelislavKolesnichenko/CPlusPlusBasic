#include <iostream>
using namespace std;

int NumLength(int &a);

int main()
{
	int a;
	cout << "a=";
	cin >> a;
	cout << "number a length =" << NumLength(a);
	return 0;
}

int NumLength(int &a)
{
	int count = 0;
	while (a != 0)
	{
		a /= 10;
		count++;
	}
	return count;
}