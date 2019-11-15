#include <iostream>
using namespace std;
float ako(float a, float b)
{
	if (a > b)
	{
		return a;
	}
	else return b;
}
int main()
{
	float c, d;
	cout << "Vuvedete 2 chisla i shte gi sravnim"<< endl;
	cin >> c;
	cin >> d;
	cout << "Izvejdame po golqmoto: " << ako(c, d) << endl;
	return 0;
}