#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
const int put(987);
double skorost(double speed);
double vreme(double time);
int main()
{
	int speed, time;
	cout << "Vuvedete za kolko chasa trqbva da pristigne vlaka=";
	cin >> speed;
	cout << "Neobhodimata skorost zada stigne za tova vreme e " << skorost(speed) << "km/h";
	cout << "\nVuvedete skorosta s koqto se dviji vlaka ";
	cin >> time;
	cout << "Vremeto za koeto shte stigne vlaka s tazi skorost e " << vreme(time) << " chasa";
	return 0;
}
double skorost(double speed)
{
	return put / speed;
}
double vreme(double time)
{
	return put / time;
}