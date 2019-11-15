#include <iostream>
using namespace std;
int units(int wh);
int tens(int wh);
int hundreds(int wh);
int main()
{
	int wh = 837;
	cout << "Units=" << units(wh) << endl;
	cout << "Tens=" << tens(wh) << endl;
	cout << "Hundreds=" << hundreds(wh) << endl;
	system("pause");
	return 0;
}
int units(int wh)
{
	return wh % 10;
}
int tens(int wh)
{
	return wh / 10 % 10;
}
int hundreds(int wh)
{
	return wh / 100;
}