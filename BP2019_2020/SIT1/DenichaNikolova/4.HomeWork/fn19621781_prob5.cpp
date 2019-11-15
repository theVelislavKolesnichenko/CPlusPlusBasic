#include <iostream>

using namespace std;

void num(int count);

int main()
{
	int a;

	cin >> a;

	num(a);

	return 0;
}

void num(int count)
{
	int i;
	for (i = 1; i <= count; i++)
	{
		cout << i << "\t";
	}

}