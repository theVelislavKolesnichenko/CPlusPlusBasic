#include<iostream>
#include<math.h>
#include <windows.h>
using namespace std;
int main()

{
	SetConsoleOutputCP(1251);
	float a, b, c, z;
	cout << "�������� �= ";
	cin >> a;
	cout << "�������� b= ";
	cin >> b;
	cout << "�������� c= ";
	cin >> c;
	z = 2 * (a - b) * (a - c);
	cout << "��������� z= " << z << endl;

	return 0;

}