#include<iostream>
using namespace std;
int main()
{
	int a, ha, S;
	cout << "Vuvedi stoinost za strana "; cin >> a;
	cout << "Vuvedi stoinost za visochina "; cin >> ha;
	S = a * ha / 2;
	cout << "Liceto na triugulnika e ravno na " << S << endl;
	return 0;
}