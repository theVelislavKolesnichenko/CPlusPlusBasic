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
	do
	{
		cout << "Vavedi godina" << endl;
		cout << "a=";
		cin >> a;
		if ((a % 4 == 0) && (a >= 0))
		{
			cout << "Godinata e visokosna" << endl;
		}
		else if (a < 0)
		{
			cout << "Nevalidno chisli";
		}
		else
		{
			cout << "Godinata ne e visokosna" << endl;
		}
	} while (a >= 0);

	return 0;
}