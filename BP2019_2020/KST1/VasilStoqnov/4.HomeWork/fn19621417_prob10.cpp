#include <iostream>
#include<math.h>
using namespace std;
void urav();
int main()
{
	urav();
	return 0;
}
void urav()
{
	double x, n = 0, v;
	cout << "Vuvedete x= ";
	cin >> x;
	do {
		++n;
		v = (pow(x, n) + 1 / 2 * n + 1);
		cout << "Rezultatut uravnenieto e " << n << " stepen e =" << v << endl;
	} while (n != 20);
}