#include <iostream>
#include <math.h>
using namespace std;

double skorost(double b)
{
	double a; // razstoyanie
	a = 987;
	
	return float(a / b);
}

double vreme_putuvane(double b)
{
	double a = 987;

	return float(a / b);

}
int main()
{
	double a, b;
	
	cout << "Vuvedete vreme za putuvane v chasove: ";
	cin >> a;
	cout << "Skorostta na vlaka tryabva da e " << skorost(a) << "km/h" << endl << endl;

	cout << "Vuvedete skorostta na vlaka v km/h: ";
	cin >> b;
	cout << "Vremeto za putuvane e " << vreme_putuvane(b) << " chasa" << endl;
}
