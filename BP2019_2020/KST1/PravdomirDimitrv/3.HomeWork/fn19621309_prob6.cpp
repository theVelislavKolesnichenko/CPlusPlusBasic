#include <iostream>

using namespace std;
#include <iostream>

using namespace std;
double chislo(double y)
{

	if (y >= 58 & y <= 87) {
		double x = pow(y, 3) + (pow(y, 4) + 2 * y);
		cout << x;
	}
	else if (y > 15 & y<58) {
		double x = 2 * (2 * y + 5) / (14 - y / 3);
		cout << x;
	}
	else
	{
		cout << "opitaite s druga ";
	}
	return 0;
}
void main() {
	double y;
	cout << "vyvedi chislo" << endl;;
	cin >> y;
	cout << "stoinost" << chislo(y) << endl;


}