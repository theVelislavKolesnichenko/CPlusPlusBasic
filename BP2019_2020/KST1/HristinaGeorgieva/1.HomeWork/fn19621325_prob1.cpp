#include <iostream>
using namespace std;
int main()
{
	int A, B;
	double C;
	double D;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	C = A / B; //Rezultatut e cqlo chislo, zashtoto A i B sa ot tip int//
	cout << "A/B=" << C << endl;
	D = (float)A / B; //Rezultatut shte e realno chislo, zashtoto delitelqt A e ot tip float, a B e ot tip int//
	cout << "A/B=" << D << endl;
	system("pause");
	return 0;


}