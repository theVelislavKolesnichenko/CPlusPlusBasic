#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
	double y, x;
	cout << "Vuvedete stoinost za y= ";
	cin >> y;
	x = (2 * y + 5) / (14 - y / 3);
	cout << endl << "Rezultatut na uravnenieto e x=" << setprecision(3)<<x;
	return 0;
}