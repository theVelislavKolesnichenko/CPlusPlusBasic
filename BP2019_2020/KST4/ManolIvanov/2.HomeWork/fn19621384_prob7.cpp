#include<iostream>
using namespace std;
void ch(int h)
{
	cout << "vuvedi realno chislo" << endl;
	cin >> h;
}
void zad(double y)
{
	double x;
	x = 2*(2*y+5)/(14-y/3);
	cout << x;
}
int main()
{
	double z;
	cout << "vuvedete stoinost za 'z'" << endl;
	cin >> z;
	cout << "x= "; zad(z);
}