#include <iostream>
using namespace std;
int x(int y);
int main()
{
	int y;
	cout << "Vuvedete edno chislo "; cin >> y;
	if (y == 0)
		cout << "\nChisloto ne moje da se deli na 0";
	else 
		cout << "\nRezultatu ot delenieto e " << x(y);
	return 0;
}
int x(int y)
{
	return y / 20;
}
