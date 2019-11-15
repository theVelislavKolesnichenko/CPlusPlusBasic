#include <iostream>
using namespace std;

int main()
{
	int A, B;

	cout << "Vyvedete A =" << endl;
	cin >> A;
	cout << "Vyvedete B =" << endl;
	cin >> B;

	//a)
	double C = A / B;
	cout << "C = " << C << endl;

	//b)
	double D = float(A) / B;
	cout << "D = " << D << endl;

	//c)
		//Izvedenite rezultati sa razlichni, zashtoto diapazonite na float(4B) i double(8B) se razlichavat


	return 0;
}
