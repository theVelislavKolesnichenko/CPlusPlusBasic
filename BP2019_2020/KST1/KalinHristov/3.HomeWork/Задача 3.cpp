#include <iostream>
using namespace std;
float ako(float a)
{
	if (a > 0)
	{
		return 1;
	}
	else return 0;
}
int main()
{
	int c;
	cout << "Vuvedete chislo: "<< endl;
	cin >> c;
	if (ako(c) == 1)
	{
		cout << "Positive" << endl;
	}
	else cout << "Negative" << endl;
}