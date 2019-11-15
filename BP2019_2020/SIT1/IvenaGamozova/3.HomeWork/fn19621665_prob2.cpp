#include <iostream>
using namespace std;
int abc(int a, int b);
int main()
{
	int a;
	int b;
	cout << "Enter  a" << endl;
	cout << "a=";
	cin >> a;
	cout << "Enter b" << endl;
	cout << "b=";
	cin >> b;
	cout << "The bigger one=" << abc(a, b) << endl;
	return 0;
}
int abc(int a, int b)
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