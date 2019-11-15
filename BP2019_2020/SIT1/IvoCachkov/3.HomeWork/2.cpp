#include <iostream>
using namespace std;

int MAX(int a, int b);

int main()
{
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "MAX(" << a << "," << b << ") = ";
	cout << MAX(a, b) << endl;

	system("Pause");
	return 0;
}
int MAX(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}