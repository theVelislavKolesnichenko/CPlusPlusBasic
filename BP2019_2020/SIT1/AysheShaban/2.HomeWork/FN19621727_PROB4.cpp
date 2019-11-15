#include <iostream>
using namespace std;

int A;

int edinici(int e)
{
	e = A % 10;
	cout << "Edinici = " << e << endl;
	return e;
}

int desetici(int d)
{
	d = A / 10 % 10;
	cout << "Desetici = " << d << endl;
	return d;
}

int stotici(int s)
{
	s = A / 100;
	cout << "Stotici = " << s << endl;
	return s;
}


int main()
{
	A = 837;
	int a, b, c;
	cout << "Tricifreno chislo = " << A << endl;
	a = edinici('e');
	b = desetici('d');
	c = stotici('s');
	return 0;
}
