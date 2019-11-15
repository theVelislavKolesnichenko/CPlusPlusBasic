#include <iostream>
using namespace std;
int num(int a);
int main()
{
	int a;
	cout << "Number= ";
	cin >> a;
	if (a % 2 == 0)
		cout << a << " is even.";
	else
		cout << a << " is odd.";
	return 0;
}
int num(int a)
{
	return 0;
}