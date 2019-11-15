#include <iostream>
#include <cmath>

using namespace std;

int intInput(char symb);
void quadEqu(int, int, int);

int main()
{
	int a, b, c;
	a = intInput('a');
	b = intInput('b');
	c = intInput('c');
	quadEqu(a, b, c);
	return 0;
}

int intInput(char symb)
{
	cout << symb << "=";
	int a;
	cin >> a;
	return a;
}

void quadEqu(int a, int b, int c)
{
	double x[2] = { 0,0 }, d;
	d = pow(b, 2) - (4 * (double)a * c);
	if (d < 0)
	{
		cout << "There are no real roots.\n";
	}
	else if (d == 0)
	{
		cout << "x=" << -(b / (2 * a)) << endl;
	}
	else
	{
		cout << "x1=" << (-b + sqrt(d)) / 2 * a << endl
			<< "x2=" << (-b - sqrt(d)) / 2 * a << endl;
	}
}
//Съставете програма с функция която намира корените на квадратно уравнение от вида :
//
//a2 + 2ba + d = 0, където a, b и d се въвеждат от клавиатурата.