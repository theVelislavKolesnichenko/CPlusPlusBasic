#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
const int km(987);//tazi konstansta e putq na vlaka
double skorost(double s);
double vreme(double v);
int main()
{
	int s, v;
	cout << "Vuvedete za kolko chasa trqbva da pristigne vlaka=";
	cin >> s;
	cout << "Neobhodimata skorost zada stigne za tova vreme e " << skorost(s)<<"km/h";
	cout << "\nVuvedete skorosta s koqto se dviji vlaka ";
	cin >> v;
	cout << "Vremeto za koeto shte stigne vlaka s tazi skorost e " << vreme(v) << " chasa";
	return 0;
}
double skorost(double s)
{
	return km / s;//tova e formulata za izchislqvane na skorosta na vlaka 
}
double vreme(double v)
{
	return km / v;//tova e formulata za izchislqvane na nujnoto vreme na vlaka za da pristigne 
}
