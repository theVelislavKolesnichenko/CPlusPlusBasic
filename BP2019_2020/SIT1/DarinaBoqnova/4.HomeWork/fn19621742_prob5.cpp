#include <iostream>
using namespace std;

void numbers(int p);

int main()
{
	int p;
	cout << "p = ";
	cin >> p;
	numbers(p);

	system("Pause");
	return 0;
}

void numbers(int p)
{
	int q = 1;
	do
	{
		cout << q++ << " ";
	} while (p >= q);
}