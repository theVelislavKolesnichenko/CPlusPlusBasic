#include <iostream>
using namespace std;

double Fnt(double S, double V)
{
	return S / V;
}
double FnV(double S, double t)
{
	return S / t;
}
int main()
{
	int t, V, S = 987;
	cout << "Please enter value t = ";
	cin >> t;
	cout << FnV(S, t) << endl;
	cout << "Please enter value v = ";
	cin >> V;
	cout << Fnt(S, V) << endl;
	system("Pause");
	return 0;
}