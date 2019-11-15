#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, b, c, rez;//kato promenlivata "rez" e srednata stoinost na trite chisla 
	cout << "Vuvedete chisloto a=";
	cin >> a;
	cout << endl << "Vuvedete chisloto b=";
	cin >> b;
	cout << endl << "Vuvedete chisloto c=";
	cin >> c;
	rez = a + b + c / 3;
	cout <<"Srednata stoinost na trite chisla e " << rez;
}