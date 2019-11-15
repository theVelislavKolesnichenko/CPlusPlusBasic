#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	float a, h, S;
	cout << "Въведете страна а= ";
	cin >> a;
	cout << "Въведете височина h= ";
	cin >> h;
	S = (a * h) / 2;
	cout << "Лицето S= " << S << endl;
	
	return 0;

}