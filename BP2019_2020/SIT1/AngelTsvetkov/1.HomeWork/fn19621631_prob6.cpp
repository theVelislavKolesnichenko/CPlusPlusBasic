#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "Въведете a: ";
	cin >> a;
	cout << "Въведете b: ";
	cin >> b;
	cout << "Въведете c: ";
	cin >> c;
	double z = 2 * (a - b)*(a - c);
	cout << "z е равно на: " << z << endl;
	return 0;
}