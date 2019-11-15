#include <iostream>
using namespace std;
void Num(double x);
int main()
{
	double x;
	cout << "x= ";
	cin >> x;

	cout << Num(x) << endl;
	return 0;
}

void Num(double x)
{
	if (x > 0)
	{
		cout << "Positive";
	}
	else
	{
		cout << "Negative";
	}
}
