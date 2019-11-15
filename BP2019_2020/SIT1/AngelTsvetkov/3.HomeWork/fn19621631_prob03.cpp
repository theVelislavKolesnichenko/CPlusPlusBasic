#include <iostream>
using namespace std;
double check(char ch)
{
	double a;
	cout << ch << "= ";
	cin >> a;
	return a;
}
int main()
{
	double a = check('a');
	if (a > 0)
	{
		cout << "positive" << endl;
	}
	else if (a<0)
	{
		cout << "negative" << endl;
	}
	else
	{
		cout << "a=0" << endl;
	}
	return 0;
}