
#include <iostream>

using namespace std;

int main()
{
	int e, d, s, ch;//e=edinici;d=desetici;s=stotici;ch=chisloto
	cout << "Vuvedete edno tricifreno chislo: ";
	cin >> ch;
	e = ch % 10;
	d = ch / 10 % 10;
	s = ch / 100;
	cout << "Cifrata na edinicite e: " << e << endl << "Cifrata na deseticite e: " << d << endl << "Cifrata na stoticite e: " << s;
	return 0;
}