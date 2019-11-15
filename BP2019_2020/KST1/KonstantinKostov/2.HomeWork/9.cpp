#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	double a, h;
	cout << "Въведете страна на триъгълник: " << endl;
	cin >> a;
	cout << "Въведете височина на триъгълник: " << endl;
	cin >> h;
	double S;
	S = (a * h) / 2;
	cout << "Лицето на триъгълника е: " << S << endl;
	return 0;

}