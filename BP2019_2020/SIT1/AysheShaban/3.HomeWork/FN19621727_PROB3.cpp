#include <iostream>
using namespace std;

double chislo(double a)
{
	if (a > 0)
	{
		cout<<"positive";
		return 0;
	}
	else if (a < 0)
	{
		cout << "negative";
		return 0;
	}
	else
	{
		cout << "neutral";
		return 0;
	}
}

int main()
{
	double a;

	cout << "Vavedi realno chislo" << endl;

	cout << " a = ";
	cin >> a;

	chislo(a);

	return 0;

}