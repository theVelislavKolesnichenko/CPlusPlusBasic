#include<iostream>
using namespace std;
int main()
{
	int a, b;
	double c;
	cout << "Vuvedi stoinost za a "; cin >> a;
	cout << "Vuvedi stoinost za b "; cin >> b;
	//a)
	c = a / b;
	cout << "Polucheniqt rezultat e " << c << endl; //poluchenoto chislo shte e ot tip int
	//b)
	double d = float(a) / b;
	cout << "Polucheniq rezultat e " << d << endl; //poluchenoto chislo shte zaradi tipovete double i float


}