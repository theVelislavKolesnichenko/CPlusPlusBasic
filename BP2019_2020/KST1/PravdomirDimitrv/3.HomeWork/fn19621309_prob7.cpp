#include <iostream>

using namespace std;
double chislo(double y)
{

	if (y <= -5) {
		double x = pow(y, 3) + (pow(y, 2) + 2 * y);
		cout << x;
	}
	else if (y > 5) {
		double x = 2 * (2 * y + 5) / (14 - y / 3);
		cout << x;
	}
	else
	{
		cout << "opitaite s druga";
	}
	return 0;
}
void main() {
	double y;
	cout << "vyvedi chislo" << endl;;
	cin >> y;
	cout << "stoinost na x" << chislo(y) << endl;


}