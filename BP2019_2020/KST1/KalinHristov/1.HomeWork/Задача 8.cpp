#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double Y;
	cout << "Vuvejdame Y i izvejdame X za koeto x = (2Y + 5)/(14 - Y/3)"<<endl;
	cin >> Y;
	double x = (2 * Y + 5) / (14 - Y / 3);
	cout << "Izvejdame rezultat za X:" << x << endl;
}