#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;

	float c, d;
	c = a / b;
	cout << "c=" << c<<endl; //Отговорът се извежда с цяло число, тоест се закръгля.
	d =(float)a / b;
	cout << "d= " << d<<endl; //Отговърт се извежда с плаваща запетая.


	return 0;
}
