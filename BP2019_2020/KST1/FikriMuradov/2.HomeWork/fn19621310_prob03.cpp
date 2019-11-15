#include <iostream>
using namespace std;

float realno(char a)
{
	float rezultat;
	cout << a << " = ";
	cin >> rezultat;
	return rezultat;
}

int main()
{
	int a, b, c, d;
	a = realno('a');
	b = realno('b');
	c = realno('c');
	d = realno('d');

	cout << "Srednata stoynost na chislata e " << float(a + b + c + d) / 4 << endl;


}