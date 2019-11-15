#include <iostream>
using namespace std;
void liv(double q1, double w1)
{
	cout << q1 + w1;

}
void lav(double q2, double w2)
{
	cout << q2 - w2;

}
void lwv(double q3, double w3)
{
	cout << q3 / w3;

}
void lqv(double q4, double w4)
{
	cout << q4 * w4;
}
int main()
{
	double e, e1, r, r1, t, t1, y, y1;
	cout << "stoinosti za +" << endl; cin >> e >> e1;
	cout << "stoinosti za -" << endl; cin >> r >> r1;
	cout << "stoinosti za /" << endl; cin >> t >> t1;
	cout << "stoinosti za *" << endl; cin >> y >> y1;
	cout << endl << e << "+" << e1 << "=";
	liv(e, e1);
	cout << endl << r << "+" << r1 << "=";
	lav(r, r1);
	cout << endl << t << "+" << t1 << "=";
	lwv(t, t1);
	cout << endl << y << "+" << y1 << "=";
	lqv(y, y1);
}

