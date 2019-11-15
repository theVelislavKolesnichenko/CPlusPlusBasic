#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	float a, b, S, P;
	cout << "Въведете страна а= ";
	cin >> a;
	cout << "Въведете страна b=";
	cin >>b;
	S = a * b;
	P = 2 * (a + b);
	cout << "Лицето на правоъгълник e: S= " << S << endl << "Обиколката му е: P= " << P << endl;


	return 0;
}