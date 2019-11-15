#include <iostream>

using namespace std;

double doubleInput(char);
double calc(double, double);

int main()
{
	do
	{
		double a, c;
		a = doubleInput('a');
		c = doubleInput('c');
		if ((a < 0) && (c == 0))
		{
			cout << "Invalid input.\n";
		}
		else {
			cout << "y=" << calc(a, c) << endl;
		}
		cout << "- - - - - - - - -\n\n";
	} while (1);
	return 0;
}

double doubleInput(char symb)
{
	cout << symb << "=";
	double a;
	cin >> a;
	return a;
}

double calc(double a, double b)
{
	return sqrt(a+2)-2/b;
}

//Съставете програма с функция която да решава уравнението 𝑦 = √(𝑎 + 2) − 2 / 𝑐.
//Ако се се въведе отрицателно число под корена или числото в знаменател е 0 да се изведе съобщение,
//че входните данни са невалидни(Invalid Input).