#include <iostream>
using namespace std;
void fun(int a);
int main()
{
	int a;
	cout << "a = ";
	cin >> a;
	fun(a);
	return 0;
}
void fun(int a)
{
	int b = 1;
	do
	{
		cout << b++ << " ";
	} while (a >= b);
}