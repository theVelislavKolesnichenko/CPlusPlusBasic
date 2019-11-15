#include <iostream>
using namespace std;
void ch(int h)
{
	cout << "vuvedi realno chislo" << endl;
	cin >> h;
}
	void sub(double a1, double b1)
{
	cout << a1 + b1;
}
void izv(double a2, double b2)
{
	cout << a2 - b2;
}
void umn(double a3, double b3)
{
	cout << a3 * b3;
}
void del(double a4, double b4)
{
	cout << a4 / b4;
}
int main()
{
	double s1, s2, i1, i2, u1, u2, d1, d2;
	cout << "vuvedi stoinosti za subirane " << endl;
	cin >> s1 >> s2;
	cout << "vuvedi stoinosti za izvajdane " << endl;
	cin >> i1 >> i2;
	cout << "vuvedi stoinosti za umnojenie " << endl;
	cin >> u1 >> u2;
	cout << "vuvedi stoinosti za delenie " << endl;
	cin >> d1 >> d2;
	cout << endl << s1 << "+" << s2 << "=" << endl;
	sub(s1, s2);
	cout << endl << i1 << "-" << i2 << "=" << endl;
	izv(i1, i2);
	cout << endl << u1 << "*" << u2 << "=" << endl;
	umn(u1, u2);
	cout << endl << d1 << "/" << d2 << "=" << endl;
	del(d1, d2);
}
