#include<iostream>
using namespace std;
void vhod(int a)
{
	cout << "vuvedi realno chislo";
	cin >> a;
}
void avg(int b, int c, int d, int e)
{
	int sum;
	sum = (b + c + d + e);
	cout << sum / 4;
}
int main()
{
	int ch1, ch2, ch3, ch4;
	cout << "vuvedi 4 celi chisla" << endl; cin >> ch1 >> ch2 >> ch3 >> ch4;
	cout << "srednoto na 4te vuvedeni chisla e:"; avg(ch1, ch2, ch3, ch4);
}
