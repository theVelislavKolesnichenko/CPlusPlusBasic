#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int A, B;
	float C, D;
    cout << "Въведете A= ";
	cin >> A;
	cout << "Въведете B= ";
	cin >> B;
	C = A / B;
	cout << "Резултат = " << C << endl;//коментар за резултат на C: Показва цяло число.
	float E=A;
	D = E / B;
	cout << "Резултат = " << D << endl;//коментар за резулатат на D: Показва и дробната част.


	return 0;
}