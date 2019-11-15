#include <iostream>

using namespace std;
double chislo(double y)
{
	
	if (y < 1) {
		double x = pow(y, 3) + (pow(y, 4) + 2 * y);
		cout << x;
	}
	else {
		double x = 2 * (2 * y + 5) / (14 - y / 3);
		cout << x;
	}
	return 0;
}
void main() {
	double y;
	cout << "vyvedi chislo" << endl;;
	cin >> y;
	cout << "=stoinost na x" << chislo(y) << endl;
	
	
	}