#include <iostream>
using namespace std;

double S;

int skorost(int T)
{
	double V;
	cout << "Razsoqnie mejdu gara A i gara B = " << S << "km" << endl;
	cout << "Vavedi vremeto, za koeto trqbva vlaka da izmine razstoqnieto" << endl;
	cout << " T = ";
	cin >> T;
	(double)T;
	cout << " h " << endl;
	V = S / T;
	cout << " Skorostta na vlaka e = " << V << "km/h" << endl;
	return V;


}

int vreme(int V)
{
	double T;
	cout << "Razstoqnieto mejdu gara A i gara B = " << S << "km" << endl;
	cout << " Vavedi skorostta, s koqto trqbva da se dviji vlaka " << endl;
	cout << " V = ";
	cin >> V;
	(double)V;
	cout << " km/h " << endl;
	T = S / V;
	cout << " Vremeto, za koeto vlaka izminava razstoqnieto = " << T << " h " << endl;
	return T;

}


int main()
{
	S = 987;
	skorost('T');
	cout << "\n";
	vreme('V');
	return 0;
}