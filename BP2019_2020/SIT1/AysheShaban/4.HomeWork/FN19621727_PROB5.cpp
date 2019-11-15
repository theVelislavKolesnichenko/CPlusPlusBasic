#include <iostream>
using namespace std;
int chislo(int a);

int main()
{
	int a;
	cout << "Vavedi cqlo polojitelno chislo" << endl;
	cout << "a=";
	cin >> a;
	chislo(a);
	return 0;
}

int chislo(int a)
{
	while (a > 0)
	{
		cout << a << ",";
		--a;
	}
	cout << 0 << endl;
	return 0;
}