#include <iostream>

using namespace std;

void sabi(double a1, double b1)

{

	cout << a1 + b1;
}

void izv(double a2, double b2)

{

	cout << a2 - b2;


}

void dele(double a3, double b3)

{
	
cout << a3 / b3;

}

void mult(double a4, double b4)

{
	
cout << a4 * b4;
}
int main()

{

	double p, p1, m, m1, d, d1, mu, mu1;

	cout << "vuvedi stoinosti za +" << endl;

	cin >> p >> p1;
	cout << "vuvedi stoinosti za -" << endl;

	cin >> m >> m1;
	cout << "vuvedi stoinosti za /" << endl;

	cin >> d >> d1;
	cout << "vuvedi stoinosti za *" << endl;

	cin >> mu >> mu1;

	cout << endl << p << "+" << p1 << "=";
	
sabi(p, p1);

	cout << endl << m << "-" << m1 << "=";
	
izv(m, m1);
	
cout << endl << d << "/" << d1 << "=";
	dele(d, d1);

	cout << endl << mu <<"*" << mu1 << "=";

	mult(mu, mu1);
	


}