#include <iostream>
#include <conio.h>
using namespace std;
int e(int ch);//e=edinici
int d(int ch);//d=desetici
int s(int ch);//s=stotici
int main()
{
	int ch;
	cout << "Vuvedete edno tricifreno chislo=";
	cin >> ch;
	cout << "Chisloto na edinicite e " << e(ch) << endl << "Chisloto na deseticite e " << d(ch) << endl << "Chisloto na stoticite e " << s(ch);
	return 0;
}
int e(int ch)
{
	return ch % 10;
}
int d(int ch)
{
	return ch / 10 % 10;
}
int s(int ch)
{
	return ch / 100;
}