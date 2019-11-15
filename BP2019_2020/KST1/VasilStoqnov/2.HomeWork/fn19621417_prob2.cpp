#include <iostream>
#include <conio.h>
using namespace std;

double plusche(double a, double b);
double minusche(double a, double b);
double delenie(double a, double b);
double umnojenie(double a, double b);
int main() {
	double a, b,sum,sub,dev,mul;
	cout << "a=";
	cin >> a;
		cout << "b=";
		cin >> b;
		sum = plusche(a, b);
		sub = minusche(a, b);
		dev = delenie(a, b);
		mul = umnojenie(a, b);
		cout << "a+1+b+2=" << sum<<endl;  //prochetete komentarite po-nadolu
		cout << "a+2-b+1=" << sub<<endl;    
		cout << "a+3/b+1=" << dev << endl;   
		cout << "a+1*b+4=" << mul << endl;    
		return 0;
}
double plusche(double a, double b)

{                                           //sbora s promeneni chisla ot vuvedenite za da ima po 2 razlichni stoinosti za vsqko deistvie vodq se po uslovieto
	a += 1, b += 2;                  
	return a + b;
}
double minusche(double a, double b)

{
	a += 2, b += 1;                       //razlikata s promeneni chisla ot vuvedenite za da ima po 2 razlichni stoinosti za vsqko deistvie vodq se po uslovieto
	return (a-b);
}
double delenie(double a, double b)
{
	a += 3, b += 1;                                //chastno s promeneni chisla ot vuvedinite za da ima po 2 razlichni stoinosti za vsqko deistvie vodq se po uslovieto
	return (a / b);
}
double umnojenie(double a, double b)
{
	a += 1, b += 4;                              //proizvedenieto s promeneni chisla ot vuvedenite  za da ima po 2 razlichni stoinosti za vsqko deistvie vodq se po uslovieto
	return (a*b);
}

