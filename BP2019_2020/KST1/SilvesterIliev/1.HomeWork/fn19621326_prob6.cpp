#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Въведете стойност за а=" << endl;
	cin >> a;
	cout << "Въведете стойност за b=" << endl;
	cin >> b;
	cout << "Въведете стойност за c=" << endl;
	cin >> c;

	int z = 2 * (a - b) * (a - c);
	cout << "Стойността на z e=" << z << endl;




	return 0;
}