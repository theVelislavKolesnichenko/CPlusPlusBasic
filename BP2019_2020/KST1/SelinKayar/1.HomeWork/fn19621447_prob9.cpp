#include <iostream>
using namespace std;
int main()
{
	float a, h, S; // a strana, h visochina, s liceto
	cout << "Base of the triangle= ";
	cin >> a;
	cout << "Height of the triangle= ";
	cin >> h;

	S = (a + h) / 2;

	cout << "Area of the triangle= " << S << endl;

	return 0;
}