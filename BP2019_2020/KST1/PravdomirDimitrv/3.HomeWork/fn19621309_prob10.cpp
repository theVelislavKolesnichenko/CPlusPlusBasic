#include <iostream>

using namespace std;

double neutralno(int a)
{
	if (a == 0)
	{
		cout << "drugo chislo";
	}
	else if (a % 2 == 0) 
	{
		cout << " Even ";
	}
	else {
		cout << "Odd";
	}
	return 0;
}
void main() {
	int a;
	cout << "Vyvedi chislo" << endl;
	cin >> a;
	cout << "reshenie" << neutralno(a) << endl;
}
