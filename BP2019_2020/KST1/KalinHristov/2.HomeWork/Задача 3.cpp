#include <iostream>
#include <conio.h> 
using namespace std;
double average(double a,double a1,double a2,double a3);
double average(double a, double a1, double a2, double a3)
{
	double avg = (a + a1 + a2 + a3) / 4;
	return avg;
}
int main()
{
	double a, b, c, d;
	cout << "Vuvedete 4 chisla:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cout << "Izvejdame tqhnoto sredno aritmeticho:" << average(a, b, c, d);
}
