#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c;
	cout << "Vuvejdame 3 chisla i izvejdame Z za koeto Z = 2(a-b)(a-c)"<<endl;

	cout << "Vuvedi a:" << endl;
	cin >> a;
	cout << "Vuvedi b:" << endl;
	cin >> b;
	cout << "Vuvedi c:" << endl;
	cin >> c;
	double a1 = a;
	double b1 = b;
	double c1 = c;
	double Z = 2 * (a1 - b1) * (a1 - c1);
	cout << "Stoinostta na izraza Z = 2(a-b)(a-c) e:"<< Z << endl;
	return 0;
}
