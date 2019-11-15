#include <iostream>
using namespace std;

int chislo(int a)
{
	if (a % 2 == 0)
	{
		cout << "Even" << endl;
		return 0;
	}
	else
	{
		cout << "Odd" << endl;
		return 0;
	}

}

int main()
{
	int a;
	cout << "Vavedi cqlo chislo" << endl;
	cout << "a = ";
	cin >> a;
	a = chislo(a);
	return 0;
}