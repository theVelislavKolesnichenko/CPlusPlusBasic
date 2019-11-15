#include <iostream>
using namespace std;

float realno(char ch)
{
	float e;
	cout << ch << "=";
	cin >> e;
	return e;
}

float sabirane(char fl, char lf)
{
	float f, l;
	cout << "Vavedi dve realni chisla" << endl;
	cout << fl << "=";
	cin >> f;
	cout << lf << "=";
	cin >> l;
	cout << "\n";
	cout << f <<"+"<< l <<" = "<< f + l;
	cout << "\n";
	return 0;
}

float izvajdane(char g, char t)
{
	float w, q;
	cout << "Vavedi dve realni chisla" << endl;
	cout << g << "=";
	cin >> w;
	cout << t << "=";
	cin >> q;
	cout << "\n";
	cout << w << " - "<< q << " = " << w - q;
	cout << "\n";
	return 0;
}

float umnojenie(char a, char b)
{
	float f, l;
	cout << "Vavedi dve realni chisla" << endl;
	cout << a << "=";
	cin >> f;
	cout << b << "=";
	cin >> l;
	cout << "\n";
	cout << f << " * " << l << " = " << f * l;
	cout << "\n";
	return 0;
}

float delenie(char fl, char lf)
{
	float f, l;
	cout << "Vavedi dve realni chisla" << endl;
	cout << fl << "=";
	cin >> f;
	cout << lf << "=";
	cin >> l;
	cout << "\n";
	cout << f << " / " << l << " = " << f / l;
	cout << "\n";
	return 0;
}
int main()
{
	float b, c, d, e, f;

	cout << "Vavedi realno chislo" << endl;
	b = realno('b');

	cout << "\n";

	system("pause");

	cout << "\n";


	cout << "Sabirane na dve realni chisla" << endl;
	c = sabirane('c', 'd');

	cout << "\n";

	system("pause");

	cout << "\n";

	cout << "Izvajdane na dve realni chisla" << endl;
	d = izvajdane('e', 'f');

	cout << "\n";

	system("pause");

	cout << "\n";

	cout << "Umnojeie na dve realni chisla" << endl;
	e = umnojenie('g', 'h');

	cout << "\n";

	system("pause");

	cout << "\n";

	cout << "Delenie na dve realni chisla" << endl;
	f = delenie('j', 'k');

	return 0;
}