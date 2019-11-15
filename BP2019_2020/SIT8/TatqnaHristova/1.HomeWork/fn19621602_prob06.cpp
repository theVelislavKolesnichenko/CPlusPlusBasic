#include<iostream>
#include<math.h>
#include <windows.h>
using namespace std;
int main()

{
	SetConsoleOutputCP(1251);
	float a, b, c, z;
	cout << "Въведете а= ";
	cin >> a;
	cout << "Въведете b= ";
	cin >> b;
	cout << "Въведете c= ";
	cin >> c;
	z = 2 * (a - b) * (a - c);
	cout << "Резулатат z= " << z << endl;

	return 0;

}