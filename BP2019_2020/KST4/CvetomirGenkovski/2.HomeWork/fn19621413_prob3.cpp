#include <iostream>
using namespace std;
void in(int a)
{
	cout << "Vuvedi chislo";
	cin >> a;
}
void put(int b, int c, int d, int e)
{
	int all;
	all = (b + c + d + e);
	cout << all / 4;
}
int main()
{
	int q1, q2, q3, q4;
	cout << "Vuvedi chetiri chisla" << endl;
	cin >> q1 >> q2 >> q3 >> q4;
	cout << "Srednata stoinost e "; 
	put(q1, q2, q3, q4);
}