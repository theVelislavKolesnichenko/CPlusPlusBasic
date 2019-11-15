#include <iostream>
using namespace std;

double skorost(double t);
double vreme(double v);
int s = 987;

int main()
{
	
	double v, t;
	
	cout << "t=";
	cin >> t;
	v = skorost(t);
	cout << "v=" << v << endl;

	cout << "v=";
	cin >> v;
	t = vreme(v);
	cout << "t=" << t << endl;

	return 0;
}
double skorost(double t)
{
	double v;

	v = s / t;

	return v;
}
double vreme(double v)
{
	double t;

	t = s / v;

	return t;
}