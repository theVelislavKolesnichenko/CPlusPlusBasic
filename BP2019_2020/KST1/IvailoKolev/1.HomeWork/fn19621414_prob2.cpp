
#include<iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cout << "Vuvedi stoinost za a: "; cin >> a;
	cout << "vuvedi stoinost za b: "; cin >> b; 
	cout << "Vuvedi stoinost za c: "; cin >> c; 
	d = (a + b + c) / 3;
	cout << "Srednata stoinost na a,b,c e ravna na " << d << endl;

	return 0;
}