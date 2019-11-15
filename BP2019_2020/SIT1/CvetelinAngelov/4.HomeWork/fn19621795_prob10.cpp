#include <iostream>

using namespace std;

double doubleIn(char);
double calc(double);

int main()
{
	double a;
	a = doubleIn('x');
	cout << "V=" << calc(a) << endl;
	return 0;
}

double doubleIn(char symb)
{
	cout << symb << "=";
	double a;
	cin >> a;
	return a;
}

double calc(double x)
{
	double v = 0;
	for (int n = 1; n < 21; n++)
	{
		v += (x * n + 1 / 2 * n + 1);
	}
	return v;
}

//Съставете програма с функция която намира сумата на редицата :
//
//v = ∑(xn + 1 / 2n + 1)
//
//Където x се въвеждат от клавиятурата, n се изменя от 1 до 20. Резултата се извежда в конзолата