#include <iostream>
using namespace std;

int chislo(int a);

int main()
{
	int a;
	a = 0;
	a = chislo(a);

	return 0;
}

int chislo(int a)
{
	int m, n;
	m = 0;
	n = 0;
	for (int i=10; i > 0; i--)
	{
		cout << "chislo =";
		cin >> a;
		
		if (a > 0)
		{
			cout << "Positive" << endl;
			cout << "\n";
			m = m + 1;
		}
		else if (a < 0)
		{
			cout << "Negative" << endl;
			cout << "\n";
			n = n + 1;
		}
		else
		{
			cout << "Neutral" << endl;
			cout << "\n";
		}
	}
	cout << "\n";
	cout << "Positive =" << m<<endl;
	cout << "\n";
	cout << "Negative =" << n << endl;;
	return 0;
}