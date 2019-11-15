#include <iostream>
#include <windows.h>
using namespace std;

void poBit(int a, int b);

int main()
{
	SetConsoleOutputCP(1251);
	int a, b;
	cout << "Въведете a=";
	cin >> a;
	cout << "Въведете b=";
	cin >> b;
	poBit(a, b);

	return 0;
}
void poBit(int a, int b) {
	cout << "Побитово не:" << ~a << ", " << ~b << endl;
	cout << "Побитово и: " << &a << ", " << &b << endl;
	cout << "Побитово или: " << 'a|b'<< endl;
	cout << "Побитово XOR: " << 'a^b' << endl;
	int c = a << 5, d = b << 5;
	cout << "Изместване вляво: " << c << "," << d << endl;
	int e = a >> 4, f = b >> 4;
	cout << "Изместване вдясно: " << e << ", " << f << endl;
}