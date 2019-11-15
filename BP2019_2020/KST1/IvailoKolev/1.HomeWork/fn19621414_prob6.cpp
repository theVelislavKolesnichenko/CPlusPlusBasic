#include<iostream>

using namespace std;

int main()
{
	int a, b, c, z;
	cout << "Vuvedi stoinost za a "; cin >> a;
	cout << "Vuvedi stoinost za b "; cin >> b;
	cout << "Vuvedi stoinost za c "; cin >> c;
	z = 2 * (a - b) * (a - c);
	cout << "Stoinostta poluchena v z e ravna na: " << z << endl;

	return 0;
}