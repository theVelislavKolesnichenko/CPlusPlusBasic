#include <iostream>
#include <math.h>
using namespace std;

float double_in(char ch)
{
	float d;
	cout << ch << "=";
	cin >> d;
	return d;
}

int main()
{
	float a, b, c, d, e, f, g, h;
	cout << "Subirane" << endl;
	a = double_in('a');
	b = double_in('b');

	cout << "a + b = " << float(a + b) << endl << endl;
	system("pause");

	cout << "Izvajdane" << endl;
	c = double_in('c');
	d = double_in('d');

	cout << "c - d = " << float(c-d) << endl << endl;
	system("pause");

	cout << "Delenie" << endl;
	e = double_in('e');
	f = double_in('f');

	cout << "e / f = " << float(e/f) << endl << endl;
	system("pause");

	cout << "Umnojenie" << endl;
	g = double_in('g');
	h = double_in('h');

	cout << "g * h = " << float(g*h) << endl << endl;

	return 0;
	
}