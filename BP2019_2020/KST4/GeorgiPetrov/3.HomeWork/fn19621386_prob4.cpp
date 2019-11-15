#include<iostream>
using namespace std;
int fun(int y);
int main()
{
	int y;
	cout << "Vuvedi stoinost za y: ";
	cin >> y;
	if (y == 0) { cout << "Ne moje da se razdeli na 0"; cout << fun(y); }
	else cout << "rezultatut ot delenieto e " << 20 / y << endl;
	return 0;
}
int fun(int y)
{
	return 20 / y;
}