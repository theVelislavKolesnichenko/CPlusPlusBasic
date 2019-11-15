#include<iostream>
using namespace std;
void ch(int h)
{
	cout << "vuvedi realno chislo" << endl;
	cin >> h;
}
void avg(double a, double b, double c, double d)
{
	int sum;
	sum = (a + b + c + d);
	cout << sum / 4 << endl;
}
int main()
{
	double x, y, z, k;
	cout << "vuvedete stoinost za x" << endl;
	cin >> x;
	cout << "vuvedete stoinost za y" << endl;
	cin >> y;
	cout << "vuvedete stoinost za z" << endl;
	cin >> z;
	cout << "vuvedete stoinost za k" << endl;
	cin >> k;
	cout << "srednata stoinost na 4-te chisla e ravna na" << endl;
	avg(x, y, z, k);

}