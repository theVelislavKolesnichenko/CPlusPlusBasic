#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Vuvedete stoinosti za a,b,c!" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	double z = 2 * (a - b) * (a - c);
	cout << "z=" << z << endl;

	return 0;
}