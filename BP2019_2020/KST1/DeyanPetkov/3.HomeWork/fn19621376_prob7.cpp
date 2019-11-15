#include<iostream>
#include<cmath>
using namespace std;
int fun(int y);
int main()
{
	int y, x, x1;
	cout << "Vuvedi stoinost za y ";
	cin >> y;
	x = pow(y, 3) + (pow(y, 4) + 2 * y);
	x1 = 2 * ((2 * y) + 5) / (14 - (y / 3));
	if (y <= -5)
		cout << "Rezultatut ot uravnenieto e " << x;
	else if (y > 5)
		cout << "Rezultatut ot uravnenieto e " << x1;
	else
		cout << "Vuvedenoto chislo ne udovletvorqva zadachata" << endl;

	return 0;
}
int fun(int y)
{
	return 0;
}
