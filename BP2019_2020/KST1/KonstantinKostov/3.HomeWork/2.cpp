#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Въведете число:" << endl;
	cin >> a;
	cout << "Въведете число:" << endl;
	cin >> b;
	if (a > b)
	{
		cout << "По-голямото число е: " << a;
	}
	else
	{
		cout << "По-голямото число е: " << b;
	}
	return 0;
}