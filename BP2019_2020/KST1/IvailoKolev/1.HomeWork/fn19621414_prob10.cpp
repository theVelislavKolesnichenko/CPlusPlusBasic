#include<iostream>
using namespace std;
int main()
{
	int a, b, P, S;
	cout << "Vuvedi stoinost za a: "; cin >> a; 
	cout << "Vuvedi stoinost za b: "; cin >> b;
	P = (2 * a) + (2 * b);
	S = a * b;
	cout << "Perimeturut e raven na " << P << endl;
	cout << "Liceto e ravno na " << S << endl;
	return 0;
}