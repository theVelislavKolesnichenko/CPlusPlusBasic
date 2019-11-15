#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	float c, d;
	c = a / b;
	//pri ravenstvoto c=a/b prisvoqvame na promenlivata c s plavashta zapetaq rezultata ot delenieto na dve celi chisla;
	//sledovatelno c se preobrazuva v tselochislena promenliva;
	cout<<"c="<< c << endl;
	d = (float)a / b;
	//d e promenliva s plavashta zapetaq; na d prisvoqvame rezultata ot delenieto na a i b kato tozi pit preobrazuvame a v promenliva s plavashta zapetaq;
	//otkadeto sledva che d ne se preobrazuva v tselochislena promenliva i ostava promenliva s plavashta zapetaq;
	cout<<"d="<< d << endl;
	return 0;
}