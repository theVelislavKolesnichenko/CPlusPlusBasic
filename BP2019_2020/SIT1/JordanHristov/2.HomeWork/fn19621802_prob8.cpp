#include <iostream>
using namespace std;

int km = 987;
float skorost(float a);
float vreme(float b);

int main() {
	float t,v;
	cout << "t= ";
	cin >> t;
	cout << "Vlakut trqbva da se dviji s: " << skorost(t) << "km/h"<<endl;
	cout << "V= ";
	cin >> v;
	cout << "Na vlakut shte mu otneme: " << vreme(v) << " chasa." << endl;

	return 0;
}
float skorost(float a) {
	return km / a;
}
float vreme(float b) {
	return km / b;
}