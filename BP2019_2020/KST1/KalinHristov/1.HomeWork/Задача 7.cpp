#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a, c;
	cout << "Vuvejdame 2 chisla i izvejdame y za koeto y = sqrt(a+2)-c^2" << endl;

	cout << "Vuvedi a:" << endl;
	cin >> a;
	cout << "Vuvedi c:" << endl;
	cin >> c;
	double y = sqrt(a + 2) - pow(c, 2);
	cout << "Stoinostta na izraza y = sqrt(a+2)-c^2:  " << y << endl;
}