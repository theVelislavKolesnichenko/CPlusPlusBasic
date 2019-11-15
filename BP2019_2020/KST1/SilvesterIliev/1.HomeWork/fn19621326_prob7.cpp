#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, c;
	cout << "Въведете стойност за а=" << endl;
	cin >> a;
	cout << "Въведете стойност за c=" << endl;
	cin >> c;

	int y = sqrt(a +2) - pow(c,2);
	cout << "Стойността на y e=" << y << endl;




	return 0;
}