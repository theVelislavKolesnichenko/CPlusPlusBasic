#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	float a, h, S;
	cout << "�������� ������ �= ";
	cin >> a;
	cout << "�������� �������� h= ";
	cin >> h;
	S = (a * h) / 2;
	cout << "������ S= " << S << endl;
	
	return 0;

}