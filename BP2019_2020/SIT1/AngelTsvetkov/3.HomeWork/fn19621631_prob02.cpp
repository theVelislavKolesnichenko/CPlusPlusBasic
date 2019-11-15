#include <iostream>
using namespace std;
double sravnenie(char ch)
{
	double b;
	cout << ch << "= ";
	cin>> b;
	return b;
}
int main()
{
	double a = sravnenie('a');
	double b = sravnenie('b');
	if (a > b)
	{
		cout << a<< endl;
	}
	else if (b>a)
	{
		cout << b << endl;
	}
	else
	{
		cout << "a=b"<< endl;
	}
	return 0;
}
