#include <iostream>
using namespace std;
float ako(float a)
{
	float x = 20 / a;
	return x;
}
int main()
{
	float c;
	cout << "Vuvedete chislo a= " << endl;
	cin >> c;
	if (c != 0)
	{
		cout <<"Izvejdame 20/a"<< ako(c) << endl;
	}
	else cout << "Ne moje da delim na 0" << endl;
}