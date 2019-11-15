#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	float a, c, y;
	cout << "Въведете а= ";
	cin >> a;
	cout << "Въведете c= ";
	cin >> c;
	y = sqrt(a + 2) - c*2;
	cout <<"y= " << y << endl;

	return 0;

}
