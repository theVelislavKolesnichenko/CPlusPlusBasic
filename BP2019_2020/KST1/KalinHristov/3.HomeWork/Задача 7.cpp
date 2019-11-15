#include <iostream>
#include <math.h>
using namespace std;
float da(float a)
{
	float x = pow(a, 3) + (pow(a, 4) + 2 * a);
	return x;
}
float ne(float a)
{
	float x = 2 * (2 * a + 5) / (14 - a / 3);
	return x;
}
int main()
{
	float a;
	cout << "Vuvedete chislo v intervala (-bezkrainost; -5] ili (5; +bezkrainost) a=";
	cin >> a;
	if (a <= -5)
	{
		cout << "Izvejdame x: " << da(a) << endl;
	}
	else if (a > 5)
	{
		cout << "Izvejdame x: " << ne(a) << endl;
	}

	else cout << "Molq vuvedete chislo v intervala (-bezkrainost; -5] ili (5; +bezkrainost)" << endl;
}