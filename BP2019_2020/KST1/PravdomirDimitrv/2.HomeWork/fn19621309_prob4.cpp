#include <iostream>
#include <conio.h>


using namespace std;
int units(int a);
int dec(int a);
int hundreds(int a);

int main()
{
	int a;
	cout << "Typ a three digit number";
	cin >> a;
	cout << "units:" << units(a) << endl << "dec: " << dec(a) << endl << "hundreds" << hundreds(a);
	return 0;
}
int uits(int a)
{
	return a % 10;
}
int dec(int a)
{
	return a / 10 % 10;
}
int hundreds(int a)
{
	return a / 100;
}